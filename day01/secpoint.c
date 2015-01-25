#include<stdio.h>
int main(int argc, char* argv[])
{
    int i=1;
    int *p;
    int **q;

    p=&i;
    q=&p;

    printf("helloworld!\n");
    printf("&i=%p, p=%p, &p=%p, *q=%p, q=%p\n", &i,p,&p,*q,q);
}
