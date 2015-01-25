#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//两个结构体变量之间的copy行为
struct Teacher                                                                                  
{
    char name[62];//64
    int age ; //4
};

/*typedef struct
{
	char name[62];//64
	int age ; //4
}Teacher;*/

int printtArray(struct Teacher *pArray, int num )
//int printtArray(Teacher *pArray, int num )
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", pArray[i].age);
	}
	printf("\n");
	return 0;
}

int sorttArray(struct Teacher *pArray, int num )
//int sorttArray(Teacher *pArray, int num )
{
	int i = 0, j = 0;
	struct Teacher tmp;
//	Teacher tmp;
	for (i=0; i<4; i++)
	{
		for (j=i+1; j<num; j++)
		{
			if (pArray[i].age < pArray[j].age)
			{
				tmp = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = tmp;
			}
		}
	}
	return 0;
}



int main()
{
	int i = 0;
	struct Teacher tArray[10];
	//Teacher tArray[10];

	for (i=0; i<4; i++)
	{
		int tmp = 0;
		printf("\n请输入age: " );
		scanf("%d", &tArray[i].age);
	}

	printf("\nsorted before\n");
	printtArray(tArray, 4 );

	printf("\nsorted after\n");
	sorttArray(tArray, 4 );
	printtArray(tArray, 4 );
	
	return 0;
}


