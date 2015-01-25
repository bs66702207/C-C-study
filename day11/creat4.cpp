#include "iostream"
#include "stdio.h"
using namespace std;

class MyTest
{
public:
	MyTest(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		printf("MyTest():%d, %d, %d\n", a, b, c);
	}

	MyTest(int a, int b)
	{
		this->a = a;
		this->b = b;

		MyTest(a, b, 100);
	}
	~MyTest()
	{
		printf("~MyTest():%d, %d, %d\n", a, b, c);
	}

protected:
private:
	int a;
	int b;
	int c;

public:
	int getC() const { return c; }
	void setC(int val) { c = val; }
};

int main()
{
	MyTest t1(1, 2);
	printf("main: c:%d\n", t1.getC()); //请问c的值是？
//	MyTest t2(1, 2, 100);
//	printf("main: c:%d\n", t2.getC()); //请问c的值是？
	return 0;
}
