#include "iostream"
#include <queue>
using namespace std;

int main()
{
	//建一个队列
	queue<int> q;
	//x向队列中添加一个元素 
	for (int i=0; i<5; i++)
	{
		q.push(i);
	}
	while(!q.empty())
	{
		//获取队列头元素
		int tmp = q.front();
		cout<<tmp<<endl;
		//弹出队列元素
		q.pop();
	}
	return 0;
}
