#include <iostream>
#include <vector>
using namespace std;

//== != [] =
//(vector<int>模板类型 
void printfArray(vector<int> &v)
{
	
	int size = v.size();
	for (int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
}

int main()
{
	//定义一个数组（弹性）
	vector<int> v1(5); //int v[5]
	for (int i=0; i<5; i++)
	{
		v1[i] = i+1;
	}	
//	printfArray(v1);
	vector<int> v2(10);
	v2 = v1;
//	printfArray(v2);
	v2.resize(0);
	cout<<v2.size()<<endl;
//	printfArray(v2);

	vector<int> v3(10);
	v3.push_back(3);
	v3.push_back(4);
	v3.push_back(5);

	printfArray(v3);
	return 0;
}
