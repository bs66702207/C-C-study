#include "stdio.h"
#include "stdlib.h"
#include "string.h"


char * getstring1()
{
    char *p1 = "abcde";
    return p1;
}

char * getstring2()
{
    char *p2 = "abcde";
    return p2;
}

char * getstring3()
{
    char buf[30];
    strcpy(buf, "abcde");
    return buf;
}

int main()
{
    char *p1,*p2, *p3;
    p1 = getstring1();
    p2 = getstring2();
    p3 = getstring3();
    printf("p1=%p, p2=%p\n", p1,p2);
    printf("p3=%p\n", p3);
    printf("p3=%s\n", p3);
}
