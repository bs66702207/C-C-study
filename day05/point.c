#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char* str[] = {"aaa", "bbb", "0", 0, NULL};
	int i;
	for(i=0;str[i]!=NULL;i++)
	{
		printf("%s\n", str[i]);
	}
}
