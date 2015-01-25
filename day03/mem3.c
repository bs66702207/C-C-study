#include "stdio.h"
#include "stdlib.h"
#include "string.h"



int	printfArr33(char **ArrayStr, int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", ArrayStr[i]);
	}
	return 0;
}

int	printfArr2_23(char myArray[10][100], int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", myArray[i]);
	}
	return 0;

}


int sortArrayStr03(char **ArrayStr, int iNum)
{
	int i = 0, j = 0;
	char *tmp = NULL;
	//排序

	for (i=0; i<iNum; i++)
	{
		for (j=i+1; j<iNum; j++)
		{
			if (strcmp(ArrayStr[i],ArrayStr[j]) < 0)
			{
				tmp = ArrayStr[i];
				ArrayStr[i] = ArrayStr[j];
				ArrayStr[j] = tmp;
			}
		}
	}
	return 0;
}

int main()
{
	int i = 0, j = 0;
	char buf[100];
	char **myarray = (char **)malloc(10*sizeof(char*)); //int array[10]
	if (myarray == NULL)
	{
		return 0;
	}
	for (i=0; i<10; i++)
	{
		myarray[i] = (char *)malloc(100*sizeof(char)); //char buf[100];
		if (myarray[i]  == NULL)
		{
			printf("ddddde\n");
			return 0;
		}
		sprintf(myarray[i],"%d%d%d ", i, i, i);
	}

	//第三种内存模型打印 
	printf("排序之前\n");
//	printfArr2_23(myarray, 10);
	printfArr33(myarray, 10);
	//printfArr2_23(myarray, 10); //第二种打印不适合 err

	sortArrayStr03(myarray, 10);

	//第三种内存模型打印
	printf("排序之后\n");
	printfArr33(myarray, 10);

	for (i=0; i<10; i++)
	{
		free(myarray[i] );
	}
	if (myarray != NULL) 
	{
		free(myarray);
	}
	return 0;
}
