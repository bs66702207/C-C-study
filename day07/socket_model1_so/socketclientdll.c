#include "stdlib.h"
#include "stdio.h"
#include "string.h"

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
	sh = (SCK_HANDLE *)malloc(sizeof(SCK_HANDLE));
	if (sh == NULL)
	{
		ret = -1;
		printf("func cltSocketInit() err:%d", ret);
		return ret;
	}
	strcpy(sh->version, "1.0.0");
	strcpy(sh->serverip, "192.168.0.100");
	sh->serverport = 8080;

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
		printf("func cltSocketSend() err:%d", ret);
		return ret;
	}
	sh = (SCK_HANDLE *)handle;

	sh->pBuf = (char *)malloc(buflen * sizeof(char));
	if (sh->pBuf == NULL)
	{
		ret = -2;
		printf("func cltSocketSend() malloc err, buflen:%d", buflen);
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
		printf("func cltSocketRev() err:%d", ret);
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
		printf("func cltSocketDestory() err:%d", ret);
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
#ifdef  __cplusplus
}
#endif
