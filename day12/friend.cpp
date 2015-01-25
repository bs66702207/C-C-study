#include "iostream"
#include "stdio.h"
using namespace std;

//class 
//const c 冒牌货 
//register cpu身边的小太监
//typedef //混号王
class Test2
{
public:
	//友元函数的特点是：有一个参数是友元类的指针或引用
	friend int OpMem(Test2 *p, int a); //友元函数
	Test2(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	int setA(int a)
	{
		this->a = a;
	}
	int getA()
	{
		return this->a;
	}
protected:

private:
	int a ;
	int b;
};


int OpMem(Test2 *p, int a)
{
	p->a = a;
	return 0;
}

int main()
{
	Test2 t1(1, 2);
	t1.getA();
	t1.setA(5);
	cout<<t1.getA()<<endl;
	OpMem(&t1, 10);
	cout<<t1.getA()<<endl;
	return 0;
}
