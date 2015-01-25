#include <stdio.h>
#include "iostream"
using namespace std;


void myprintf(int a)
{
	printf("a:%d\n ", a );
}
void myprintf(double a)
{
	printf("a:%f\n ", a );
}

void myprintf(char *p, int b)
{
	printf("p:%s, b:%d", p, b);
}

void myprintf(int b, char *p)
{
	printf("b:%d, p:%s", b, p);
}

//函数返回类型不是函数重载的判断标准
void myprintf(int a, int b)
{
	printf("a:%d, b:%d\n", a, b);
}

//函数返回类型不是函数重载的判断标准
//当函数重载遇上 函数默认参数
//在一起
int  myprintf(int a, int b, int c=0)
{
	printf("a:%d, b:%d c:%d \n", a, b, c);
	return a;
}


int main()
{
	int a = 1;
//	myprintf(a);
//	myprintf(1, 2); //二义性 
	myprintf(1, 2, 3);  
	return 0;
}
