#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct T1
{
	char name[62];//64
	int age; //4
	char c1;//1
	char c2;//1
	//2
};

struct T2
{
    char c1;//1
    char c2;//1
    char name[62];//62
    int age; //4
};
 
struct __attribute__ ((__packed__)) T3
{
    char name[62];
    int age;
    char c1;
    char c2;
};

struct __attribute__ ((__packed__)) T4
{
    char c1;
    char c2;
    char name[62];                                                                              
    int age; 
};
int main()
{
	struct T1 t1;
	struct T2 t2;
	struct T3 t3;
	struct T4 t4;
	printf("sizeof(t1)%d\n", sizeof(t1));
	printf("sizeof(t2)%d\n", sizeof(t2));
	printf("sizeof(t3)%d\n", sizeof(t3));
	printf("sizeof(t4)%d\n", sizeof(t4));
}
