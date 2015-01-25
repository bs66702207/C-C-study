#include <iostream>
using namespace std;

//函数重写print
//赋值兼容性原则（把子类对象赋给父类指针或者引用）

//函数重写遇上赋值兼容性原则

//这个就是面向对象的新需求
//针对这个函数void howToPrintf(Parent *base)，我希望是
//如果传来父类对象，那么应该执行父类函数
//如果传来子类对象，那么执行子类函数
//多态
//c++编译器给我们提供的多态方案是 虚函数

class Parent
{
public:
	Parent(int a = 0)
	{
		this->a = a;
	}
	//virtual void print()
	void print()
	{
		cout<<"父类a"<<a<<endl;
	}
protected:
private:
	 int a;
};

class Child : public Parent
{
public:
	Child(int b = 0)
	{
		this->b = b;
	}
	//virtual void print()
	void print()
	{
		cout<<"子类b"<<b<<endl;
	}
protected:
private:
	int b;
};


void howToPrintf(Parent *base)
{
	base->print(); //同样一句话，能实现多种功能；有多种形态
}


void howToPrintf2(Parent &base)
{
	base.print();
}
int main()
{
	Parent  p1;
//	p1.print();//p

	Child	c1;
//	c1.print();//c

	//
	Parent *base = NULL;
	base = &p1;
//	base->print();//p virtual:p

	base = &c1;
//	base->print();//p virtual:c 

	// p2 是c1的别名 ，是c1本身
	Parent &p2 = c1;
//	p2.print();//c

	//函数参数
//	howToPrintf(&p1);//p virtual:p
//	howToPrintf(&c1);//p virtual:c
	

//	howToPrintf2(p1);//p virtual:p
//	howToPrintf2(c1);//p virtual:c


//	Child *pC = &p1;//err
//	Child *pC = (Child*)&p1;//err
//	Child *pC = &c1;
//	pC->print();//c
	return 0;
}

