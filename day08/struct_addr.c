#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "malloc.h"
#include "list.h"

struct teacher {
	int		id;
	char	name[200];
	int		age;
	struct list_head list;
};


int main()
{	
	{
		struct teacher t1;
		int		a = &t1;
		int i = (int)&t1 - ((int) &((struct teacher *)0)->id);
		int j = (int)&t1 - ((int) &((struct teacher *)0)->name);
		int k = (int)&t1 -((int) &((struct teacher *)0)->age);

		//int m = ((int) &((struct teacher *)0)->id);		
	
		printf("a--->%d \n", a);
		printf("i--->%d \n", i);
		printf("j--->%d\n", j);
		printf("k--->%d\n", k);

		//求偏移地址
	//#define container_of(ptr, type, member) (type *)((char *)ptr -offsetof(type,member))
	//#define offsetof(TYPE, MEMBER)   ((int) &((struct teacher_node *)0)->name)

	}

	{
		//int i = (int)&teacher -(int)&((struct teacher *)0->id);
	}
	//main_stack();
		
	getchar();
	getchar();
	return 0;
}
