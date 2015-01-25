// 包含头文件
#include "iostream"
#include <stdio.h>

//我要使用c++标准库里面的标识符
// :: 域作用符
using namespace std;

void swap(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void swap2(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

struct Teacer {
	int &a;
	int &b;
	char &c;
	//char *p ;
};

//1 引用像一个常量
//2 能启到指针的作用
//3 引用和指针有关系吗？ 
//4 引用也有内存空间

int main()
{
#if 0
	int a = 10;
	char buf[100]; //buf 常量
	//引用的语法 type & 引用名字 = 被引用的变量；
	int &b  = a;  //相当于定义一个引用
	int &c  = b;  //相当于定义一个引用


	//在使用的时候，引用相当于 变量的别名
	b = 11; //在这个地方，你要用c++的语法去思考它
	printf("b:%d\n", b);//11
	printf("a:%d\n", a);//11

	c = 12; //*p 

	printf("b:%d\n", b);//12
	printf("a:%d\n", a);//12
#endif

#if 0
	int a1 = 10; 
	int b1 = 20;
	swap(a1, b1);
	printf("a1:%d, b1:%d\n", a1, b1);
#endif
	int a[10];

	printf("sizeof(Teacher) %d\n", sizeof(Teacer));//12

	return 0;

}
