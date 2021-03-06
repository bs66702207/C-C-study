#include "iostream"
using namespace std;

/*
C++中没有接口的概念
	C++中可以使用纯虚函数实现接口
	接口类中只有函数原型定义，没有任何数据的定义。

	*/

class Interface1
{
public:
	virtual void print() = 0;
	virtual int add(int i, int j) = 0;
};

class Interface2
{
public:
	virtual int add(int i, int j) = 0;
	virtual int minus(int i, int j) = 0;
};

class parent
{
public:
	int i;
};
class Child : public parent, public Interface1, public Interface2
{
public:  
	void print()
	{
		cout<<"Child::print"<<endl;
	}

	int add(int i, int j)
	{
		return i + j;
	}

	int minus(int i, int j)
	{
		return i - j;
	}
};

int main(int argc, char *argv[])
{
	Child c;

	c.print();

	cout<<c.add(3, 5)<<endl;
	cout<<c.minus(4, 6)<<endl;

	Interface1* i1 = &c;
	Interface2* i2 = &c;

	cout<<i1->add(7, 8)<<endl;
	cout<<i2->add(7, 8)<<endl;
	return 0;
}

