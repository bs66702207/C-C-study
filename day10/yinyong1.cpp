#include "iostream"
#include "stdio.h"
using namespace std;

int& j()
{
	static int a ;
	a = 10;
	printf("a:%d", a);
	return a;
}

int main()
{
	int b1 = j(); //ok
	int b2 = j();  //返回了一个值，返回赋给b2
	int &b3 = j(); //b3 返回值的引用
	printf("b1:%d\n", b1);
	printf("b2:%d\n", b2);
	printf("b3:%d\n", b3); //b3是一个引用类型 c++编译器会帮我们执行 *p 
	return 0;
}
