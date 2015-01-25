#include "iostream"
#include "stdio.h"
using namespace std;


int myf1()
{
	int a ;
	a = 10;
	return a;
}

int& myf2()
{
	int a ;
	a = 11;
	printf("myf2: a:%d\n", a);
	return a;
}

int* myf3()
{
	int a ;
	a = 12;
	return &a;
}

int main()
{
	int b1 = myf1(); //ok b1=a
	int b2 = myf2();  //返回了一个值，返回赋给b2 ? b2=&a
	int &b3 = myf2(); //b3 返回值的引用 &b3 = &a
	printf("b1:%d\n", b1);
	printf("b2:%d\n", b2);
	printf("b3:%d\n", b3); //b3是一个引用类型 c++编译器会帮我们执行 *p 
	return 0;
}
