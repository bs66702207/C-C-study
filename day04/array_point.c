#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	typedef int(MyArr5)[5]; 
	int a1[5] = {1,3,4,55, 6};
	MyArr5 *pArray = &a1; //4个字节
	int i;
	for (i=0; i<5; i++)
	{	
		printf("%d ", (*pArray)[i]);
	}
	printf("\n-----------------------\n");

	{
		//直接定义一个 数组指针类型 用这个类型定义指针变量
		//我声明了一个数组类型 （固定大小内存块的别名）
		typedef int(MyArr5_1)[5];  
		//定义一个指向数组类型的指针变量
		//声明一个 数组指针类型
		typedef int (*PMyArr5)[5]; 
		MyArr5_1 *myA; 
		PMyArr5 myP = NULL;

		int b[5] = {1,3,4,55, 6};

		myP = &b;
		myA = &b;

		for (i=0; i<5; i++)
		{
			//a1[i] = i;
			// = i;
			printf("%d ", (*myP)[i]);
			printf("%d ", myP[0][i]);
			printf("%d,", (*myA)[i]);
		}
	}

	printf("\n-----------------------\n");


	{
		int c[5] = {1,3,4,55, 6};
		//定义一个指向数组的指针变量
		int (*myparra)[5] = &c;
		for (i=0; i<5; i++)
		{
			printf("%d ", (*myparra)[i]);
		}
	}

	printf("\n-----------------------\n");

}
