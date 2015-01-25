#include <stdio.h>                                                                
#include "iostream"
using namespace std;
//函数占位参数
int func(int a, int b, int )
{
	return a + b;
}

//默认参数和占位参数
int func2(int a, int b, int  = 0)
{
	printf("func2 ....begin\n");
	return a + b;
}

int main()
{
	func(1, 2, 3);
	func2(1, 2);
	func2(1, 2, 3);
	return 0;
}
