#include <stdio.h>
#include "iostream"
using namespace std;

//inline请求关键字， 内联编译
//内联函数的函数体，需要和实现写在一块

#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))

//a 2  b 3
inline int myfunc(int a, int b)
{ 
	return a < b ? a : b;
}

int main()
{
	int a = 1;
	int b = 3;
	//int c = myfunc(++a, b); //头疼兄弟 c2
	int c = MYFUNC(++a, b);//===> ((++a) < (b) ? (++a) : (b));

	printf("a = %d\n", a); //3
	printf("b = %d\n", b);//3
	printf("c = %d\n", c); //3

	return 0;
}
