#include <stdio.h>                                                                
#include "iostream"
using namespace std;

void myPrint(int x = 3)
{
	printf("x:%d \n", x);
}

void myPrint2( int z, int x = 3, int y = 4)
{
	printf("x:%d \n", x);
}
int main()
{
	myPrint(5);
	myPrint();
	myPrint2(1);
	return 0;
}
