#include<stdio.h>
namespace NameSpaceA
{
	int a = 0;
}

namespace NameSpaceB
{
	int a = 1;

	namespace NameSpaceC
	{
		struct Teacher
		{
			char name[10];
			int age;
		};
	}
}

int main()
{
	using namespace NameSpaceA;
	using NameSpaceB::NameSpaceC::Teacher;

	printf("a = %d\n", a);
	printf("a = %d\n", NameSpaceB::a);

	Teacher t1 = {"aaa", 3};
	for(int i=0; i<2;i++)
	printf("t1.name = %s\n", t1.name);
	printf("t1.age = %d\n", t1.age);

	return 0;
}
