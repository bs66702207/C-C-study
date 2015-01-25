#include <cstdlib>                                                                                
#include <iostream>

using namespace std;
class P
{
public:
	virtual void func(void)
	{
		cout<<"P->func"<<endl;
	}
protected:
};

class C : public P
{
public:
	void func(void)
	{
		cout<<"C->func"<<endl;
	}
protected:
};

int main()
{
	cout<<"P的大小: "<<sizeof(P)<<endl;
	cout<<"C的大小: "<<sizeof(C)<<endl;
	return 0;
}
