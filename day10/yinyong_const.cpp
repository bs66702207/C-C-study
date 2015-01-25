#include "iostream"
#include "stdio.h"
using namespace std;


struct Adv2Teacher
{
	char name[32];
	int age ;
};

//如果不加引用 那么 myT3会copy给t3 
//  const Adv2Teacher * const t3
void getTeacher03(const Adv2Teacher &  t3)
{
	//只能读 不能写相当于 const Adv2Teacher * const t3
//	t3.age = 100; //err
	printf("age:%d", t3.age);
}

//1 const引用的作用：让变量所指向的内存空间只读
//2 给const引用初始化，有两种方法
//让变量初始化const引用
//

int main()
{
	//1让变量初始化const引用
	int b = 10;
	const int &a = b;

//	a = 11; //不能通过a去间接修改b
	b = 12;

	//const引用的第二种初始化方法
	//
	 const  int &c = 10;
//	c = 11;
	 printf("&c:%p\n", &c);
	 printf("c:%d\n", c);
	return 0;
}
