#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int printfArr(char **ArrayStr, int iNum)
{
	int i = 0;
	for(i=0; i<iNum; i++)
	{
		printf("%s\n", ArrayStr[i]);
	}
	return 0;
}

int sortArrayStr(char **ArrayStr, int iNum)
{
	int i = 0, j = 0;
	char *tmp = NULL;
	//排序

	for (i=0; i<4; i++)
	{
		for (j=i+1; j<4; j++)
		{
			if (strcmp(ArrayStr[i],ArrayStr[j]) > 0)
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
	char *ArrayStr[] = {"ccccc", "aaaa", "bbbb", "11111"};

	printf("before sort:\n");
	printfArr(ArrayStr, 4);
	
	sortArrayStr(ArrayStr, 4);

	printf("after sort:\n");
	printfArr(ArrayStr, 4);

}
