#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//两个结构体变量之间的copy行为
struct AdvAdvTeacher
{
	char name[64];//64
	char *a_name; //4 //结构体里面套一级指针
	int age ; //4
};

struct AdvAdvTeacher*  creatTArray(int count)
{
	int i = 0;int j = 0;
	struct  AdvAdvTeacher*p1 = (struct  AdvAdvTeacher *)malloc(count*sizeof(struct  AdvAdvTeacher ));
	if (p1 == NULL)
	{
		return NULL;
	}
	for (i=0; i<count; i++)
	{
		memset(&p1[i], 0, sizeof(struct  AdvAdvTeacher));
		p1[i].a_name = (char *)malloc(128*sizeof(char)) ;// char buf[128*4]
		memset(p1[i].a_name , 0, 128*sizeof(char));
		//p1[i].stuname = (char **)malloc(100);
	}
	return p1;
}
void freeTArray(struct AdvAdvTeacher* tArray, int num)
{
	int i = 0;

	if (tArray == NULL)
	{
		return ;
	}

	for (i=0; i<num; i++)
	{
		char *p = tArray[i].a_name; //为什么这里需要释放
		if (p != NULL)
		{
			free(p);
		}
	}

	if (tArray != NULL)
	{
		free(tArray);
		tArray = NULL; //垃圾话语
	}
}

int printtArray(struct AdvAdvTeacher *pArray, int num)
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

void copyObj03(struct  AdvAdvTeacher *from, struct  AdvAdvTeacher *to)
{
	memcpy(to, from, sizeof(struct  AdvAdvTeacher));
	to->a_name = (char *)malloc(128);
	strcpy(to->a_name, from->a_name);
}

int main()
{
	//struct AdvAdvTeacher t1;
	//struct AdvAdvTeacher t2;

	struct AdvAdvTeacher*  p1 =creatTArray(1);
	struct AdvAdvTeacher*  p2 =creatTArray(1);

	printf("\n请输入age: " );
	//scanf("%d", &(p1->age) ) ;
	p1->age = 11;

	printf("\n请输入名字: " );
	//scanf("%s", p1->name);
	strcpy(p1->name, "11");

	printf("\n请输入别名: " );
	//scanf("%s", p1->a_name);
	strcpy(p1->a_name ,"2");

	(*p2) = (*p1); //error 影响p2释放，因为p2->a_name指向了p1->a_name
	
	printf("p1->a_name=%p\n", p1->a_name);
	printf("p2->a_name=%p\n", p2->a_name);

	printtArray(p2, 1);	
		

	freeTArray(p1, 1);
	freeTArray(p2, 1);
	p1 = NULL;
	p2 = NULL;
	printf("p1=%p\n", p1);
	printf("p2=%p\n", p2);
	return 0;
}
