#include "stdio.h"
#include "stdlib.h"
#include "string.h"



int main()
{
	int i = 0, j = 0, tmp = 0;
	//a是数组首元素的地址
	int a [5] = {3, 4, 5, 6, 2};

	//1 myarray数组首元素的地址吧
	//2 myarray是一个常量指针 3k
	//3 myarray是一个数组指针
	int myarray[3][5];

	//直接定义一个数组指针
	int (*p)[5] = &a;

	for (i=0; i<5; i++)
	{
		printf("%d\n", (*p)[i]);
	}

	//&a 步长 5*4 = 20;

	for (i=0; i<3; i++)
	{
		for (j=0; j<5; j++)
		{
			myarray[i][j] = tmp++;
		}
	}

	printf("myarray:%p myarray+1:%p", myarray, myarray+1);

	printf("\n&a:%p &a+1:%p \n", &a, &a+1);

	p = myarray;

	for (i=0; i<3; i++)
	{
		for (j=0; j<5; j++)
		{
			p[i][j] = tmp++;
			printf("%d ", p[i][j]);
		}
	}
	printf("\n");
	return 0;
}
