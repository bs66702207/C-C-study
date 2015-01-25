#include "iostream"                                                               
#include "stdio.h"
#include "Test3.h"
using namespace std;


/*class Test3
{
public:
	Test3(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<m_a<<endl;
		count ++;
		cout<<"构造执行"<<endl;
	}
	~Test3()
	{
		cout<<"析构执行"<<endl;
	}
	

	static int getCount()
	{
		return count;
		
	}
protected:
private:
	int m_a; //属于具体的对象
	int m_b;
	//static修饰的变量或者函数，属于这个类，不属于具体的对象
	static int count;
};
int Test3::count  = 0;*/

int main()
{
	Test3 t1(1, 3), t2(3, 4), t3(5, 65);
	cout<<"Test3::getCount():"<<Test3::getCount()<<endl;;
	cout<<"t3.getCount():"<<t3.getCount()<<endl;;	

	return 0;
}
