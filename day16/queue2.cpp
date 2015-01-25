#include "iostream"
#include <queue>
using namespace std;

struct Teacher
{
	int age ;
	char name[10];
};

void printFont(queue<Teacher*> &q)
{
	while(!q.empty())
	{
		//获取队列头元素
		Teacher * tmp = q.front();
		cout<<tmp->age<<endl;
		//弹出队列元素
		q.pop();
	}
}

int main()
{
	queue<Teacher*> q;
	Teacher t1, t2, t3;
	t1.age = 11;
	t2.age = 22;
	t3.age = 33;

	//x向队列中添加一个元素 
	q.push(&t1);
	q.push(&t2);
	q.push(&t3);

	printFont(q);
	
	return 0;
}
