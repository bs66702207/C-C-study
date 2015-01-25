#include "iostream"                                                               
#include "stdio.h"
#include "Test3.h"
using namespace std;

Test3::Test3(int a, int b)
{
    m_a = a;
    m_b = b;
    cout<<m_a<<endl;
	count ++;
    cout<<"构造执行"<<endl;
}

Test3::~Test3()
{
    cout<<"析构执行"<<endl;
}

int Test3::getCount()
{
    return count;
    
}

int Test3::count = 0;
