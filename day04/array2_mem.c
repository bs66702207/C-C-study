#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int i = 0;

	//指针数组
	char * p1[] = {"123aaaaa", "456bbbbb", "789ccccc"};
	
	printf("p1=%p\n",p1);
	printf("p1+1=%p\n",p1+1);
	printf("p1+2=%p\n",p1+2);
	printf("*(p1)=%p\n",*(p1));
	printf("*(p1+1)=%p\n",*(p1+1));
	printf("*(p1+2)=%p\n",*(p1+2));
	printf("---------------------------\n");

	//二维数组
	char p2[3][9]  = {"123aaaaa", "456bbbbb", "789ccccc"};

	printf("p2=%p\n",p2);
	printf("p2+1=%p\n",p2+1);
	printf("p2+2=%p\n",p2+2);
	printf("---------------------------\n");
	//手工二维内存
	char **p3 = (char **)malloc(3 * sizeof(char *)); //int array[3];
	
	for (i=0; i<3; i++)
	{
		p3[i] = (char *)malloc(10*sizeof(char)); //char buf[10]
		if (p3[i] == NULL)
		{

		}
		sprintf(p3[i], "%d%d%d%d", i, i, i, i);
	}
	printf("&p3=%p\n",&p3);
	printf("&p3+1=%p\n",&p3+1);
	printf("&p3+2=%p\n",&p3+2);
	printf("p3=%p\n",p3);
	printf("p3+1=%p\n",p3+1);
	printf("p3+2=%p\n",p3+2);
	printf("*(p3)=%p\n",*(p3));
	printf("*(p3+1)=%p\n",*(p3+1));
	printf("*(p3+2)=%p\n",*(p3+2));
	return 0;
}

