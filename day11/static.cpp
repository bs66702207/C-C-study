#include "iostream"
#include "stdio.h"
using namespace std;

//c语言中的static

//状态保留
//用static修饰变量
void GetStatic()
{
	int a = 10;
	//b只初始化一次
	static int b = 10;
	
	printf("a:%d b:%d \n", a, b);
	a++;
	b++;
}

//这个函数myprintf只能在这个c中被使用
static void myprintf()
{
	printf("锄禾日当午，生活真是苦");
	printf("送走c语言，来了它大叔（c++）\n");
}

int main()
{
	GetStatic();
	GetStatic();
	GetStatic();
	myprintf();
}
