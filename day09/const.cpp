// 包含头文件
#include "iostream"
#include <stdio.h>
//我要使用c++标准库里面的标识符
// :: 域作用符
using namespace std;

struct Teacher
{
	char name[32];
	int age;
};
//不能给地址的内容赋值
int getTeacher01(const Teacher *  pT)
{
//	pT = NULL;
//	pT->age  = 11;
	return 0;
}
//不能修改内容的地址
int getTeacher02( Teacher * const pT)
{
//	pT = NULL;
//	pT->age  = 11;
	return 0;
}

int getTeacher03(Teacher  t1)
{
	t1.age = 11;
	return 0;
}

class Tutil
{
	public:
		static void test(void)
		{
			printf("?\n");
		}
};

void fun1(void)
{
#define a 10
//	const int b = 20;
//	#undef
}

void fun2(void)
{
	printf("a = %d\n", a);
//	printf("b = %d\n", b);
}

int main()
{
//复习
/*	Teacher t0 ;
	getTeacher03(t0);
	printf("t0.age=%d\n", t0.age);*/
	
//cpp
#if 0
	const int a = 10;

	printf("sssss:&a:%p", &a);
	int *p = NULL;
	int *p2 = NULL;

	//当你对a取地址的时候，有一个内存空间（&a a的内存空间）
	p = (int *)&a;
	p2 = (int *)&a;

	printf("修改之前a:%d \n", a);

	printf("&a:%p p的值:%p", &a, p);
	//a = 11;
	*p = 11;
	printf("修改之后a:%d \n", a);
	printf("*p:%d \n", *p);
#endif

#if 0
	const int a = 1;
    const int b = 2;
    int array[a + b] = {0};
    int i = 0;
    
    for(i=0; i<(a+b); i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    printf("Press enter to continue ...");
    getchar();
    
	Tutil::test();
#endif

	fun1();
	fun2();

	return 0;
}
