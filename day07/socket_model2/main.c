#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "socketclientdll.h"


int main()
{
	int		ret = 0;
	void	*handle = NULL;

	unsigned char buf[128];
	int buflen = 11; /*in*/

//	unsigned char outbuf[128];
	unsigned char *outbuf;
	int outbufLen ; /*in*/

	strcpy(buf, "addddddddddddddddddddddddddddddddaaaaaaaa");

	ret =  cltSocketInit2(&handle /*out*/); 
	if (ret != 0)
	{
		printf("cltSocketInit err:%d", ret);
		goto  End;
	}

	//客户端发报文
	ret = cltSocketSend2(NULL /*in*/,buf /*in*/, buflen /*in*/);
	ret = cltSocketSend2(handle /*in*/,buf /*in*/, buflen /*in*/);
	if (ret != 0)
	{
		printf("func cltSocketSend() err:%d", ret);
		goto End;
	}


	//客户端收报文
	//底层库提供的是一种机制， 而不是具体的策略
//	ret = cltSocketRev(handle /*in*/, outbuf , &outbufLen);
	ret = cltSocketRev2(handle /*in*/, &outbuf , &outbufLen);
	if (ret != 0)
	{
		printf("func cltSocketSend() err:%d", ret);
		goto End;
	}
	printf("main: &outbuf=%p\n", &outbuf);
	printf("main: outbuf: %s \n", outbuf);
	printf("main: outbufLen=%d\n", outbufLen);
	cltSocketRev2_Free(&outbuf);
	printf("main: after free: outbuf=%p\n", outbuf);


End:
	//客户端释放资源
	if (handle != NULL)
	{
		cltSocketDestory2(&handle/*in*/);
	}
	return 0;
}



