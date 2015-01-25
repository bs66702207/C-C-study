#include "iostream"
#include "stdio.h"
using namespace std;


class Parent
{
public:
	static int a;
	int b;
	Parent()
	{
		;
	}

	static void add()
	{
		a = a + 10;
	}
	void print()
	{
		cout<<"a"<<a<<"b"<<b<<endl;
	}

private:
};
int Parent::a = 10;

//class Child : private Parent
class Child : public Parent
{
public:
	
protected:
private:

};

int main()
{
	Child c1;
	c1.add();
	c1.print();
	return 0;
}
