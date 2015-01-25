#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "SocketImp1.h"
#include "SocketProtocol.h"
using namespace std;


//主框架
void mainOP01()
{
	SocketIF *sIf  = new SocketImp1();

	unsigned char buf[1024]; 
	strcpy((char *)buf, "ddddddddddddddsssssssssssssssssssss");
	 int buflen = 10;

	 unsigned char out[1024];
	 int outlen = 10;
	sIf->cltSocketInit();
	sIf->cltSocketSend(buf, buflen);
	sIf->cltSocketRev(out, &outlen);
	sIf->cltSocketDestory();

}

int mainOP02(SocketIF *sIf, unsigned char *in, int inlen, unsigned char *out, int *outlen)
{
	int ret = 0;
	ret = sIf->cltSocketInit();
	ret = sIf->cltSocketSend(in, inlen);
	ret = sIf->cltSocketRev(out, outlen);
	ret = sIf->cltSocketDestory();
	return ret;

}

int main()
{
	SocketIF *sIf  = new SocketImp1();

	unsigned char buf[1024]; 
	strcpy((char *)buf, "ddddddddddddddsssssssssssssssssssss");
	int buflen = 10;

	unsigned char out[1024];
	int outlen = 10;

	 mainOP02(sIf, buf, buflen, out, &outlen);
	 cout<<out<<endl;
	return 0;
}
