#include <iostream>
using namespace std;

class SmartPtr 
{
public:
    SmartPtr(Point *ptr = 0):p(ptr), count(new int(1)) { }//构造函数
    SmartPtr(Point &point):p(point.clone()), count(new int(1)) { }//构造函数
    SmartPtr(const SmartPtr &sp):p(sp.p), count(sp.count) { ++*count; }//复制构造函数
    SmartPtr& operator=(const SmartPtr &sp) {//重载赋值操作符
        ++*sp.count; //首先将右操作数引用计数加1，
        decr_use();  //然后将引用计数减1，可以应对自赋值
        p = sp.p;
        count = sp.count;
        return *this;
    }
    ~SmartPtr() { //析构函数
        decr_use();
    }

public: //一般情况下不会实现这两个操作符，因为我们不希望用户直接操纵基础对象指针
    const Point* operator->() const {
        if(p) return p;
        else throw p;
    }
 const Point& operator*() const {
		if(p) return *p;
		else throw p;
    }

private:
    void decr_use() {
        if(--*count == 0)
        {
             delete p;
             delete count;
		}
    }

private:
    Point *p;                                      //基础对象指针
    int *count;                                   //指向引用计数的指针
};
