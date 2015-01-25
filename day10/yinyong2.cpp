#include "iostream"
#include "stdio.h"
using namespace std;

//static int a  = 10; 把a变成一个状态变量
//a初始化的时候10 ，只初始化一次
//a = 11 

int& mygg()
{
	static int a  = 10;
	printf("a:%d", a);
	return a;
}

int main()
{
	mygg() = 11;
	mygg();
	return 0;
}
