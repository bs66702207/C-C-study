#include "stdio.h"
#include "stdlib.h"

int stack()
{
    float *p1 = NULL;
    int *p2 = NULL;
    int a = 0;
    int b= 0;
    char buf[16];
    printf("&p1:%x, &p2:%x, &a:%x, &b:%x \n", &p1, &p2, &a, &b);
    printf("&buf[0]:%x, &buf[1]:%x", &buf[0], &buf[1]);

//    getchar();
}

int heap()
{
    char *p1 = NULL;
    char *p2= NULL;
    p1 = (char *)malloc(16);
    p2 = (char *)malloc(16);

    printf("\n p1:%x, p2:%x", p1, p2);
    printf("\n &p1:%x, &p2:%x", &p1, &p2);

    //通过内存地址间接赋值
   // *((char *)0x394da0) = 'a';
   // *((char *)0x394da1) = 'b';

    //通过内存地址间接修改内存空间的值
    //通过变量名访问内存空间
    //通过内存地址间接访问内存空间 这就是C语言的灵活性，也是c语言的精华
    printf("\np2[0]:%c", p2[0]);
    printf("\np2[1]:%c", p2[1]);

    if (p1 != NULL) 
    {
        free(p1);
    }
    if (p2 != NULL)
    {
        free(p2);
    }
 //   getchar();
    return 0;
}

int main()
{
    heap();
    printf("\n\n-------------------------\n\n");
    stack();
    return 0;
}
