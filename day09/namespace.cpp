#include<stdio.h>
#include<iostream>

//using namespace std;

int main(void)
{
	int i = 0;

	printf("hello cplusplus\n");
	//cout相当于屏幕终端
	//<< C里面是左移,把数据的地址左移到屏幕里面
	//<<说明C++对这个操作符做了功能增强 操作符重载
	std::cout<<"hello cplusplus\n";
	std::cout<<"please input a number:\n";
	
	//cin相当与一个键盘
	std::cin>>i; 
	//endl \n
	std::cout<<"you enter the number is:"<<i<<std::endl;

	return 0;
}
