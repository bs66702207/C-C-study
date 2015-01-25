#include "iostream"
using namespace std;
class DD
{
public:
	DD(int d) //DD中定义了有参构造函数
	{
		cout<<d<<endl;
		m_d = d;
	}
private:
	int m_d;
};

class EE
{
public:
	//构造函数的初始化列表
	//EE(int _a):d1(1),d2(2)
	EE(int _a):d2(1),d1(2)
	{
		a = _a;
		cout<<_a<<endl;
	}

protected:
private:
	int a;
	DD d1;   //按照变量定义的顺序
	DD d2;
};
int main()
{
	EE e1(3);
	return 0;
}
