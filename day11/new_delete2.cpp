#include "iostream"                                                               
#include "stdio.h"
using namespace std;

class Test1
{
public:
	Test1(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<"构造执行"<<endl;
	}
	~Test1()
	{
		cout<<"析构执行"<<endl;
	}
protected:
public:
	int m_a;
	int m_b;
};

int CreateTest1(Test1 **p)
{
	Test1 *tmp = new Test1(5, 6);
	//p是实参的地址 *（实参的地址）去间接修改实参的值
	*p = tmp;
	printf("tmp=%p\n", tmp);
	printf("&tmp=%p\n", &tmp);
	return 0;
}


int CreateTest2(Test1 * &myp)
{
	myp = new Test1(5, 6);
	//p是实参的地址 *（实参的地址）去间接修改实参的值
	
	return 0;
}

int main()
{
//	Test1 *p1 = new Test1(3, 4);
	Test1 *p2 = NULL;

	CreateTest1(&p2);
//	CreateTest2(p2);

	printf("after: p2->m_a=%d, p2->m_b=%d\n", p2->m_a, p2->m_b);
	printf("&p2=%p\n", &p2);
//	delete p1;
	delete p2;
}
