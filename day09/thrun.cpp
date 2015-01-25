// 包含头文件
#include "iostream"
#include <stdio.h>
//我要使用c++标准库里面的标识符
// :: 域作用符
using namespace std;


//在c++里面的三目运算符 返回是一个变量
//让表达式做左值 
//1 左值 能被放在 = 做值 称为左值  
//2 当左值的条件， 这段内存空间可以被你写


int main()
{
	int a = 10;
	int b = 20;
	int c = 31;

	//返回一个最小数 并且给最小数赋值成3
	//三目运算符是一个表达式 ，表达式不可能做左值
	//让表达式做左值 
	*(a < b ?  &a : &b ) =  30;
	//(a < b ?  a : b ) =  30;
	c =((a < b ?  a : 1 ));
	printf("a = %d, b = %d\n", a, b);


	return 0;
}

