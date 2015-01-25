#include "iostream"
#include <stdio.h>
using namespace std;

int& myA(int &a)
{
	a++;
	return a;
}
int main()
{
	int b = 10;
	int b1 = myA(b); //ok
	int b2 = myA(b);  //返回了一个值，返回赋给b2
	int &b3 = myA(b); //b3 返回值的引用
	printf("b1:%d\n", b1); //11
	printf("b2:%d\n", b2);//12
	printf("b3:%d\n", b3); //13
}
