#include<iostream>
using std::cout;
using namespace std;

class A
{
public:
	A()
	{
		//cout<<&(A::c)<<endl;
	}
	int a;
	static int c;

	static void mm()
	{
		cout<<&(A::c)<<endl;
	}
protected:
	int b;
private:

};

class B : public A
{
public:
	B()
	{
		//cout<<&B::c;
//		cout<<c;
	}
	static int c;

	int a;
	static void mm()
	{
		cout<<&(B::c)<<endl;
	}
protected:
	int b;
private:

};

int A::c = 1;
int B::c = 2;

int main()
{ 
	//cout<<sizeof(A)<<endl;
	//cout<<sizeof(B);
	B b;
	b.A::mm();
	b.mm();
	cout<<A::c<<endl;
	cout<<B::c<<endl;
	cout<<b.c<<endl;
	return 0;
}


