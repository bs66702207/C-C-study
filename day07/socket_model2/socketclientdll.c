#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "itcastlog.h"

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct _SCK_HANDLE {
	char	version[16];
	char	serverip[16];
	int		serverport;
	char    *pBuf;
	int		buflen ;
}SCK_HANDLE;


//------------------第一套api接口---Begin--------------------------------//
//客户端初始化 获取handle上下
int cltSocketInit(void **handle /*out*/)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;
	if (handle == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketInit() err:%d (handle == NULL)", ret);
		return ret;
	}

	sh = (SCK_HANDLE *)malloc(sizeof(SCK_HANDLE));	
	if (sh == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketInit() err:%d", ret);
		return ret;
	}
	memset(sh, 0, sizeof(SCK_HANDLE));
	strcpy(sh->version, "1.0.0");
	strcpy(sh->serverip, "192.168.0.100");
	sh->serverport = 8080;

	//初始化环境
	sh->pBuf = NULL;
	sh->buflen = 0;

	*handle = sh;

	return ret;
}

//客户端发报文
int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/,  int buflen /*in*/)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;


	if (handle == NULL || buf==NULL || buflen>3323214324UL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketSend() err:%d", ret);
		return ret;
	}
	sh = (SCK_HANDLE *)handle;

	sh->pBuf = (char *)malloc(buflen * sizeof(char));
	if (sh->pBuf == NULL)
	{
		ret = -2;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketSend() malloc err, buflen:%d", buflen);
		return ret;
	}
	memcpy(sh->pBuf, buf, buflen);
	sh->buflen = buflen;


	return ret;
}

//客户端收报文
int cltSocketRev(void *handle /*in*/, unsigned char *buf /*in*/, int *buflen /*in out*/)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;
	if (handle == NULL || buf==NULL || buflen==NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketRev() err:%d", ret);
		return ret;
	}
	sh = (SCK_HANDLE *)handle;
	
	memcpy(buf, sh->pBuf, sh->buflen);
	*buflen = sh->buflen;

	return ret;
}

//客户端释放资源
int cltSocketDestory(void *handle/*in*/)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;
	if (handle == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketDestory() err:%d", ret);
		return ret;
	}
	sh = (SCK_HANDLE *)handle;

	if (sh->pBuf != NULL)
	{
		free(sh->pBuf);
	}

	free(sh);
	return ret;
}
//------------------第一套api接口---End-----------------------------------//



//------------------第二套api接口---Begin--------------------------------//
int cltSocketInit2(void **handle)
{
	return cltSocketInit(handle);
}

//客户端发报文
int cltSocketSend2(void *handle, unsigned char *buf,  int buflen)
{
	return cltSocketSend(handle, buf, buflen);
}
//客户端收报文
int cltSocketRev2(void *handle, unsigned char **buf, int *buflen)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;
	unsigned char *tmp = NULL;
	if (handle == NULL || buf==NULL || buflen==NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketRev2() err:%d", ret);
		return ret;
	}
	sh = (SCK_HANDLE *)handle;

	tmp = (unsigned char *)malloc(sh->buflen * sizeof(unsigned char));
	if (tmp == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketRev2() malloc err :%d", ret);
		return ret;
	}
	memcpy(tmp, sh->pBuf, sh->buflen);

	//赋值
	*buf = tmp;
//	printf("cltSocketRev2:buf=%p\n",buf);
//	printf("cltSocketRev2:*buf=%s\n", *buf);
	*buflen = sh->buflen;
	return ret;
}
int cltSocketRev2_Free(unsigned char **buf)
{
	int ret = 0;
	if (buf == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketRev2_Free() malloc err :%d", ret);
		return ret;
	}
	free(*buf);
	*buf = NULL; //间接的把实参给修改了
	return ret;
}
//客户端释放资源
int cltSocketDestory2(void **handle)
{
	int ret = 0;
	SCK_HANDLE *sh = NULL;
	if (handle == NULL)
	{
		ret = -1;
		ITCAST_LOG(__FILE__, __LINE__, LogLevel[4], 4, "func cltSocketDestory2() err:%d", ret);
		return ret;
	}

	sh = (SCK_HANDLE *) *handle;

	if (sh->pBuf != NULL)
	{
		free(sh->pBuf);
	}

	free(sh);
	*handle = NULL; //间接修改实参的值 避免野指针
	return ret;
}
//------------------第二套api接口---End--------------------------------//

#ifdef  __cplusplus
}
#endif
