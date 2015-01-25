#include "iostream"                                                               
#include "stdio.h"
#include "stdlib.h"
using namespace std;

class Test2
{
public:
	Test2(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<"构造执行"<<endl;
	}
	~Test2()
	{
		cout<<"析构执行"<<endl;
	}
protected:
private:
	int m_a;
	int m_b;
};

int main()
{
	Test2 *tmp = (Test2 *)malloc(sizeof(Test2));
	free(tmp);
	//delete(tmp);

	int *p = new int[4];
	free(p);

	return 0;
}
