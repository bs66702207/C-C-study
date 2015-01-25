#include<stdio.h>
using namespace std;

f(i)
{
	printf("i = %d\n", i);

}

g()
{
	return 5;
}

int main(int argc, char *argv[])
{

	f(10);

	printf("g() = %d\n", g(1, 2, 3, 4, 5));


	getchar();	
	return 0;
}
