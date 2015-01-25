#include <iostream>
using namespace std;
class SmartPtr	//智能指针类
{
public:
     SmartPtr(Point *ptr):rp(new RefPtr(ptr)) {cout<<"构造函数"<<endl;}	//构造函数
	 
     SmartPtr(const SmartPtr &sp):rp(sp.rp) { ++rp->count; cout<<"copy构造函数"<<endl;}	//复制构造函数
	 
     SmartPtr& operator=(const SmartPtr& rhs) //重载赋值操作符
	 {	
		cout<<"=="<<endl;
		++rhs.rp->count;	//首先将右操作数引用计数加1，
		if(--rp->count == 0)	//然后将引用计数减1，可以应对自赋值
		{
			cout<<"== delete rp"<<endl;
			delete rp;
		}
		rp = rhs.rp;
		return *this;
     }
	 
    ~SmartPtr() 
	{	//析构函数
		cout<<"析构函数"<<endl;
		if(--rp->count == 0)	//当引用计数减为0时，删除辅助类对象指针，从而删除基础对象
		{
			cout<<"析构函数 delete rp"<<endl;
			delete rp;
		}
	}
	
	int getCount(void)
	{
		return rp->count;
	}

private:
     RefPtr *rp;	//辅助类对象指针
};
