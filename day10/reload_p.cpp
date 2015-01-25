#include <stdio.h>
#include "iostream"
#include "string.h"
using namespace std;
int func(int x) // int(int a)
{
	return x;
}

int func(int a, int b)
{
	return a + b;
}

int func(const char* s)
{
	return strlen(s);
}
//定义个数组类型
typedef int (Array)[10];

//定义一个 （指向数组的类型）指针类型
typedef int (*pArray)[10];

//定义了一个  指针  类型 （指向函数的指针类型）
typedef int(*PFUNC)(int a); // int(int a)


int main()
{
	int c = 0;
	//用类型定义变量
	PFUNC p = func;

	//Array my; //int my[10];
	//pArray pmy = NULL; //  Array *pMy;

	c = p(1);

	printf("c = %d\n", c);

	return 0;
}

