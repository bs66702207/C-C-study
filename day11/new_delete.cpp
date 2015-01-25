#include "iostream"
#include "stdio.h"
using namespace std;

int main()
{
 	int *p1 = new int;
 	*p1 = 1;
 	printf("*p1=%d\n", *p1);
 	delete p1;

	int *p2 = new int(10);
	printf("*p2=%d\n", *p2);
	delete p2;
	
	
	//分配数组
	int *p3 = new int[10];
	for (int i=0; i<10; i++)
	{
		p3[i] = i+1;
		printf("%d", p3[i]);
	}
	printf("\n");
	delete[] p3;


	return 0;
}
