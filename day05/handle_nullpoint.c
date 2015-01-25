#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"

char ** spitString_Creat(int mycount)
{
	int i = 0;
	char **myarray = NULL;

	if (mycount > 1000)
	{
		return NULL;
	}
		 
	myarray = (char **)malloc(mycount*sizeof(char *));
	if (myarray == NULL)
	{
		return NULL;
	}
	for (i=0; i<10; i++)
	{
		myarray[i] = (char *)malloc(100);
	}

	return myarray;
}

void  spitString05_free(char **myarray, int ncount)
{
	int i = 0;
	if (myarray == NULL)
	{
		return ;
	}
	for (i=0; i<ncount; i++)
	{
		if (myarray[i] != NULL) free(myarray[i]);
	}
	if (myarray)
	{
		free(myarray);
	}
	myarray = NULL; //垃圾
}

int main()
{
	int ret = 0, i = 0;
	char *p = "abcdef,acccd,eeee,aaaa,e3eeeee,sssss,";
	char **buf_err = NULL;
	char c = ',';
	char buf[10][30];
	int ncount = 10;
	char **myarray = NULL;
	
	//1初始化的是定义指针变量的时候，指针变量赋值成null
	char **myarray1 = NULL;
	char **myarray2 = NULL;
	char **myarray3 = NULL;

	myarray1 = spitString_Creat(10);
	if (myarray1 == NULL)
	{
		printf("func spitString_Creat() \n");
		goto End;
	}

	myarray2 = spitString_Creat(10000);
	if (myarray2 == NULL)
	{
		//2 释放的时候，判断是不是null
		spitString05_free(myarray1, 10);
		//3 释放完毕以后再赋值成null
		myarray1 = NULL;
			
		printf("func spitString_Creat() \n");
		goto End;
	}

	myarray3 = spitString_Creat(10);
	if (myarray3 == NULL)
	{
		printf("func spitString_Creat() \n");
		goto End;
	}

	for (i=0; i<ncount; i++)
	{
		printf("%s\n", myarray[i]);
	}

End:
	if (myarray1 != NULL)
	{ 
		spitString05_free(myarray1, 10);
		myarray1 = NULL;
	}

	if (myarray2 != NULL)
	{ 
		spitString05_free(myarray2, 10);
		myarray2 = NULL;
	}

	if (myarray3 != NULL)
	{ 
		spitString05_free(myarray3, 10);
		myarray3 = NULL;
	}
	
	return 0;
}



