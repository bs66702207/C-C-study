#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//1 不管是几维数组，都是线性存储的。所以会存在多维数组做函数参数，退化问题
//2 多维数组做函数参数 二维数组，能勉强表达出来。但是三维数组，四维数组，，就表达不出来了。
//结论：指针做函数参数，有效内存维数，只到2级。。如果你看到3级指针 4级指针，它表示的不是内存的维数
int printf2Array(int *a, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
}

//int myarray(int a[][5])
int main()
{
	int myarray[3][5];
	//int myarray[3][4][5];
	int tmp = 0;
	int *p = NULL;
	int i=0, j = 0;

	//直接定义一个数组指针

	//&a 步长 5*4 = 20;

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
	printf2Array(p, 3*5);
	printf("\n");
	return 0;
}

