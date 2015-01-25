#include "iostream"
#include "stdio.h"
#include <stack>
using namespace std;

struct Teacher
{
    int age;
    char name[10];
};


void printfStack(stack<Teacher> &s)
{
    //栈遍历
    while(!s.empty())
    {
        //获取栈顶元素
        cout<<s.top().age<<endl;
        //弹出栈顶元素
        s.pop();
    }
}

int main()
{
	
	Teacher t1, t2, t3;
    t1.age = 11;
    t2.age = 22;
    t3.age = 33;
    stack<Teacher> s;
    s.push(t1);
    s.push(t2);
    s.push(t3);
    printfStack(s);

	return 0;
}
