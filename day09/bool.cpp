#include<stdio.h>
using namespace std;

int main()
{	
	int i = 10;
	bool a = true;
	bool b = false;
	printf("sizeof(bool)=%d\n", sizeof(bool));

	printf("a=%d\n", a);
	a = i;
	printf("a=%d\n", a);

	return 0;
}

