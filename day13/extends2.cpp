#include "iostream"
#include "stdio.h"
using namespace std;

class A
{
public:
	int a;
	int b;
	A(int a = 0, int b =0)
	{
		this->a = a;
		this->b = b;
	}

	void add()
	{
		a = a + 10;
	}
	void print()
	{
		cout<<"a"<<a<<"b"<<b<<endl;
	}

private:
};

class B : public A
{
public:
	void add()
	{
		a++;
	}
	int b;
//	void print()                                                                                           
//    {
//        cout<<"b.a"<<a<<"b.b"<<b<<endl;
//    }

protected:
private:

};

void howToCall(A *pA)
{
	pA->print();
}

int main()
{
#if 0
	A a;
	B b;
	b.b = 3;
	b.A::b = 4;
	
	a.print();//a=0, b=0

	
	b.print();//a=0, b=4

	//定义了父类p
//	A *pA = NULL;
//	pA = &b;
//	pA->print();//a=0, b=4

	//
//	A &myb= b;
//	myb.print();//a=0, b=4
	
	howToCall(&a);
	b.add();//a+1
	howToCall(&b);//a=1, b=4
#endif

	B b1;
	b1.add();//a+1
	b1.A::add();//a+10
	howToCall(&b1);
	return 0;
}
