#include <iostream>                                                                                                                                                     
#include <vector>
using namespace std;

struct Teacher
{
	int age ;
	char name[10];
};

int main()
{
	struct Teacher t1, t2, t3;
	t1.age = 11;
	t2.age = 22;
	t3.age = 33;
	vector<Teacher> v3(0);
	v3.push_back(t1);
	v3.push_back(t2);
	v3.push_back(t3);


	for (int i=0; i<3; i++)
	{
		 cout<<v3[i].age<<endl;
	}

	vector<Teacher *>v4(0);
	v4.push_back(&t1);
	v4.push_back(&t2);
	v4.push_back(&t3);

	for (int i=0; i<3; i++)
	{
		//struct Teacher *tmp = (struct Teacher *)v3[i];
		struct Teacher *tmp = v4[i];
		cout<<tmp->age<<endl;

	}

	return 0;
}
