#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//定义一个函数类型
typedef int Func(int);

//函数名称就代表函数的入口地址 函数名称本身就是一个指针
int test(int a)
{
	return a*a;
}

void f()
{
	printf("执行了f\n");
}

int main()
{
	Func *myfun = NULL;
	myfun = test;
	printf("%d \n", myfun(2));

	//对函数名取多少地址 都是一样
	myfun = &test;
	printf("%d \n", myfun(2));

	//直接定义一个函数指针，并且赋值 
	void (*myf1)() = f;
	void (*myf2)() = &f;

	myf2();
	myf1();


	return 0;
}
