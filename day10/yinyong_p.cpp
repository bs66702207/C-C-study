#include "iostream"
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct AdvTeacher
{
	char name[32];
	int age ;
};

//
void getTeacher01(AdvTeacher **p)
{
	AdvTeacher *tmp = (AdvTeacher *)malloc(sizeof(AdvTeacher));
	tmp->age = 30;
	*p = tmp;
}

//这个是 结构体变量指针的引用 指针的引用
//p2是 t2 的别名
//
void getTeacher02(AdvTeacher * &p2)
{
	p2 = (AdvTeacher *)malloc(sizeof(AdvTeacher));
	p2->age = 30;
}

//如果不加引用 那么 myT3会copy给t3 
void getTeacher03(AdvTeacher &t3)
{
	t3.age = 11;
}

int main()
{
	AdvTeacher *t1 = NULL;
	AdvTeacher *t2 = NULL;
	getTeacher01(&t1);//二级指针
	getTeacher02(t2);//指针的引用
	
	AdvTeacher  t3;
	t3.age = 10;
	getTeacher03(t3);//结构体引用	

	printf("t1->age=%d\n", t1->age);
	printf("t2->age=%d\n", t2->age);
	printf("t3.age=%d\n", t3.age);
	return 0;
}
