#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int myarray[3][5];
	//int myarray[3][4][5];
	int tmp = 0;
	int *p = NULL;
	int i=0, j = 0;

	//直接定义一个数组指针

	//&a 步长 5*4 = 20;

	printf("myarray+0=%p\n", myarray+0);
	printf("myarray+1=%p\n", myarray+1);
	printf("myarray+2=%p\n", myarray+2);
	printf("&myarray[0]=%p\n", &myarray[0]);
	printf("&myarray[1]=%p\n", &myarray[1]);
	printf("&myarray[2]=%p\n", &myarray[2]);
	printf("*(myarray+0)=%p\n", *(myarray+0));
	printf("*(myarray+1)=%p\n", *(myarray+1));
	printf("*(myarray+2)=%p\n", *(myarray+2));

	for (i=0; i<3; i++)
	{
		for (j=0; j<5; j++)
		{
			myarray[i][j] = tmp++;
			//第i行第j列赋值
			*(*(myarray+i)+j ) = tmp++;
		}
	}
	p = (int *)myarray;
	return 0;
}
