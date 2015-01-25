#include "iostream"
#include "stdio.h"
using namespace std;

class Test1
{
public:
	//Test1(this, int a, int b)
	Test1(int a=0, int b=0)
	{
		this->a = a;
		this->b = b;
	}
public:
	int a;
	int b;

public:
	Test1& T_add(Test1 &t2)
	{
// 		Test1 t3;
// 		t3.a = t1.a + t2.a;
// 		t3.b = t1.b + t2.b;
// 		return t3;
		a = a + t2.a;
		this->b = this->b + t2.b;
		return *this;
	}

};
//全局函数
Test1 T_add(Test1 &t1, Test1 &t2)
{
	Test1 t3;
	t3.a = t1.a + t2.a;
	t3.b = t1.b + t2.b;
	return t3;
}

int main()
{
	Test1 t1(1, 2), t2(3, 4);
	Test1 t3;

	cout<<"t3.a:"<<t3.a<<"t3.b:"<<t3.b<<endl;
	
	//t3 = T_add(t1, t2);	
	t3.T_add(t1);
	t3.T_add(t2);
	
	cout<<"t3.a:"<<t3.a<<"t3.b:"<<t3.b<<endl;
	return 0;
}
