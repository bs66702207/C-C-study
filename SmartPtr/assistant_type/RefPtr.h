/**
引入辅助类：定义一个单独的具体类（RefPtr）来封装指针和相应的引用计数。
*/
class RefPtr	//辅助类
{    //该类成员访问权限全部为private，因为不想让用户直接使用该类
     friend class SmartPtr;  //定义智能指针类为友元，因为智能指针类需要直接操纵辅助类
     RefPtr(Point *ptr):p(ptr), count(1) { }
     ~RefPtr() { delete p; }

     int count;	//引用计数
     Point *p;	//基础对象指针
};
