#include <iostream>
#include "Point.h"
#include "RefPtr.h"
#include "SmartPtr.h"
using namespace std;
/**
每次创建类的新对象时，初始化指针并将引用计数置为1；
当对象作为另一对象的副本而创建时，拷贝构造函数拷贝指针并增加与之相应的引用计数；
对一个对象进行赋值时，赋值操作符减少左操作数所指对象的引用计数（如果引用计数为减至0，则删除对象），并增加右操作数所指对象的引用计数；
调用析构函数时，构造函数减少引用计数（如果引用计数减至0，则删除基础对象）。
*/
int main()
{
    Point *p1 = new Point(10, 8);
    SmartPtr sp1(p1);//创建类的新对象 count=1
	cout<<"SmartPtr sp1(p1); sp1.cout="<<sp1.getCount()<<endl;
	
    SmartPtr sp2(sp1);//拷贝构造函数拷贝指针并增加与之相应的引用计数 count=2
	cout<<"SmartPtr sp2(sp1); sp1.cout="<<sp1.getCount()<<endl;
	cout<<"SmartPtr sp2(sp1); sp2.cout="<<sp2.getCount()<<endl;
	
    Point *p2 = new Point(5, 5);
    SmartPtr sp3(p2);//创建类的新对象 count=1
	cout<<" SmartPtr sp3(p2); sp1.cout="<<sp1.getCount()<<endl;
	cout<<" SmartPtr sp3(p2); sp2.cout="<<sp2.getCount()<<endl;
	cout<<" SmartPtr sp3(p2); sp3.cout="<<sp3.getCount()<<endl;
    
	sp3 = sp1;//sp3.count-1 = 0 销毁, sp1.count+1 = 3;赋值给sp3.count = 3; 
	cout<<" sp3 = sp1; sp1.cout="<<sp1.getCount()<<endl;
	cout<<" sp3 = sp1; sp2.cout="<<sp2.getCount()<<endl;
	cout<<" sp3 = sp1; sp3.cout="<<sp3.getCount()<<endl;

    return 0;
}
