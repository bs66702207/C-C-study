#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct AdvAdvTeacher
{
	char name[64];//64
	char *a_name; //4 //结构体里面套一级指针
	int age ; //4
};

void copyObj03(struct  AdvAdvTeacher *from, struct  AdvAdvTeacher *to)
{
	memcpy(to, from, sizeof(struct  AdvAdvTeacher));
	to->a_name = (char *)malloc(128);
	strcpy(to->a_name, from->a_name);
}

int main()
{
	struct AdvAdvTeacher t1;
	struct AdvAdvTeacher t2;
	t1.age = 11;
	t1.a_name = (char *)malloc(100);
	strcpy(t1.a_name, "t1111");

// 	{
// 		char *p = (char *)malloc(100);
// 		free(p);
// 		free(p);
// 	}

	//t2 = t1; //编译器赋值操作 编译器等号=操作
	copyObj03(&t1, &t2);
	if (t1.a_name != NULL)
		free(t1.a_name);

	if (t2.a_name != NULL)
		free(t2.a_name);
	return 0;
}
