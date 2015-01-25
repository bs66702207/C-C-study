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
		printf("mycount > 1000!\n");
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
		printf("spitString05_free: myarray == NULL\n");
		return ;
	}
	printf("spitString05_free: myarray != NULL\n");
	for (i=0; i<ncount; i++)
	{
		free(myarray[i]);
	}
	if (myarray)
	{
		free(myarray);
	}
	myarray = NULL;
}


int main()
{
	int ncount = 10;
	char **myarray = NULL;
	char **myarray1 = NULL;
	char **myarray2 = NULL;
	char **myarray3 = NULL;
	int i;
	myarray1 = spitString_Creat(10);
	if (myarray1 == NULL)
	{
		printf("func spitString_Creat() 1\n");
		goto End;
	}
	myarray2 = spitString_Creat(10000);
	if (myarray2 == NULL)
	{
		spitString05_free(myarray1, 10);
//		myarray1 = NULL;
		printf("func spitString_Creat() 2\n");
		goto End;
	}

	myarray3 = spitString_Creat(10);
	if (myarray3 == NULL)
	{
		printf("func spitString_Creat() 3\n");
		goto End;
	}

/*	for (i=0; i<ncount; i++)
	{
		printf("%s\n", myarray[i]);
	}*/
End:
	printf("myarray1=%p\n",myarray1);
	spitString05_free(myarray1, 10);
	spitString05_free(myarray1, 10);
	spitString05_free(myarray2, ncount);
	spitString05_free(myarray3, 10);

	return 0;

}



