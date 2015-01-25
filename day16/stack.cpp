#include "iostream"
#include "stdio.h"
#include <stack>
using namespace std;

int main()
{
	//定义一个栈
	stack<int> s;

	//栈赋值
	for (int i=0; i<5; i++)
	{
		s.push(i+1);
	}
	
	//栈遍历
	while(!s.empty())
	{
		//获取栈顶元素
		int tmp = s.top();
		//弹出栈顶元素
		s.pop();
		printf("%d \n", tmp);
	}
	return 0;
}
