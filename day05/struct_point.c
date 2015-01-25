#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//两个结构体变量之间的copy行为
struct AdvTeacher
{
	char name[64];//64
	char *a_name; //4
	int age ; //4
};

int printtArray(struct AdvTeacher *pArray, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("\n %d ", pArray[i].age);
		printf("%s ", pArray[i].name);
		printf("%s ", pArray[i].a_name);
	}
	printf("\n");
	return 0;
}

int sorttArray(struct AdvTeacher *pArray, int num )
{
	int i = 0, j = 0;
	struct AdvTeacher tmp;
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

struct AdvTeacher*  creatTArray(int count)
{
	int i = 0;
	struct  AdvTeacher*p1 = (struct  AdvTeacher *)malloc(count*sizeof(struct  AdvTeacher ));
	if (p1 == NULL)
	{
		return NULL;
	}
	for (i=0; i<count; i++)
	{
		memset(&p1[i], 0, sizeof(struct  AdvTeacher));//二者等价
		memset(p1+i, 0, sizeof(struct  AdvTeacher));
		p1[i].a_name = (char *)malloc(128*sizeof(char)) ;// char buf[128*4]
		memset(p1[i].a_name , 0, 128*sizeof(char));
	}
	return p1;
}

void freeTArray(struct AdvTeacher* tArray, int num)
{
	int i = 0;

	printf("freeTArray00\n");
	if (tArray == NULL)
	{
		return ;
	}
	printf("freeTArray01\n");
	for (i=0; i<num; i++)
	{
		char *p = tArray[i].a_name; //为什么这里需要释放
		if (p != NULL)
		{
			free(p);
		}

		//error 不需要释放
		//辅导的时候，如果谁犯这个错误，拿10元买水果。立字
		if (tArray[i].name != NULL) //这个地方要怎么做？
		{
			free(tArray[i].name);
		}
	}

	printf("freeTArray02\n");
	if (tArray != NULL)
	{
		free(tArray);
		tArray = NULL; //垃圾话语
	}
}

int main()
{
	int i = 0;
	struct AdvTeacher *pArray  = creatTArray(4);
	if (pArray == NULL)
	{
		return -1;
	}

// 	{
// 		//p
// 		char *p = (char *)malloc(100);
// 		free(p+1);
// 	}

	for (i=0; i<4; i++)
	{
		int tmp = 0;

		char *p = pArray[i].a_name;

		printf("\n请输入age: " );
		scanf("%d", &(pArray[i].age) ) ;

		printf("\n请输入名字: " );
		scanf("%s", pArray[i].name);

		printf("\n请输入别名: " );
		scanf("%s", p);
	}

	printf("\nsorted before\n");
	printtArray(pArray, 4 );

	printf("\nsorted after\n");
	sorttArray(pArray, 4 );
	printtArray(pArray, 4 );

	freeTArray(pArray, 4);

	return 0;
}


