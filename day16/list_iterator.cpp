#include "iostream"
#include <list>
using namespace std;

int main()
{
	//建立了一个链表
	list<int> l;
	int len = l.size();
	cout<<"len="<<len<<endl;
	
	//链表增加元素（尾查法）
	for (int i=0; i<5; i++)
	{
		l.push_back(i);
	}
	len = l.size();
	cout<<"len="<<len<<endl;
	
	list<int>::iterator current = l.begin();
	//l.end();
	
	while(current != l.end())
	{
		cout<<*current<<endl;
		current++;
	}

	//把链表的首位置赋给迭代器指针
	current = l.begin();
	current ++;
	current ++;
	current ++;
	l.insert(current,100);

	for(list<int>::iterator p = l.begin(); p!=l.end(); p++)
	{
		cout<<(*p)<<endl;
	}

	return 0;
}
