#include<stdio.h>
#include<iostream>

using namespace std;

int main01(void)
{
	int i = 0;

	printf("hello cplusplus\n");
	//cout相当于屏幕终端
	//<< C里面是左移,把数据的地址左移到屏幕里面
	//<<说明C++对这个操作符做了功能增强 操作符重载
	cout<<"hello cplusplus\n";
	cout<<"please input a number:\n";
	
	//cin相当与一个键盘
	cin>>i; 
	//endl \n
	cout<<"you enter the number is:"<<i<<endl;

	return 0;
}

//面向过程
int main02(void)
{
	double r;
	double s;
	cout<<"请键入圆的半径:";
	cin>>r;

	s = 3.14*r*r;
	cout<<"圆的面积为:"<<s<<endl;
	return 0;
}

//面向对象
struct circle
{
	//
	double m_r; //属性  //成员变量
	void setR(double r) //方法 成员函数
	{
		m_r = r ;
	}

	double getR() //方法
	{
		return m_r; 
	}

	double getS()
	{
		return 3.14*m_r*m_r;
	}
};

int main()
{
	main01();
//	main02();
	circle c1;
	c1.setR(10);
	cout<<"半径"<<c1.getR()<<"面积是："<<c1.getS()<<endl;
	c1.setR(11);
	cout<<"半径"<<c1.getR()<<"面积是："<<c1.getS()<<endl;
	return 0;
}
