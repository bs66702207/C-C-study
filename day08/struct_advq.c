#include "stdlib.h"
#include "stdio.h"
#include "string.h"


struct AdvAdvTeacher
{
	char name[32];
	int age;
	char *p ;
};


void main01()
{
	int i = 0;
	struct AdvAdvTeacher t1;
	struct AdvAdvTeacher *p = NULL;
	p  = &t1;
	printf("age:%d", p->age);

	p = p +1 ;
	p = p-1;
	p = p - p ;

	i = (int )(&(p->age));
//	i = (int )(&(0->age));
	printf("i:%d \n", i);

}

int main()
{
	int i = 0;
	main01();	
	((struct AdvAdvTeacher *)0);

	i = (int) (&(((struct AdvAdvTeacher *)0)->age ));
	printf("i:%d \n", i);
	printf("i:%d \n", i);
	return 0;
}
