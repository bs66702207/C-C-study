#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void changeA();

int main()
{
    int b = 10;
    int a[10] = {1, 3, 44, 2, 3, 44, 5, 5,6, 67};
    printf("a:%p &a:%p \n", a, &a); //a &a大小一样
    printf("a+1:%p &a+1:%p \n", a+1, &a +1 ); //+1 大小不一样 
    //a &a数据类型不一样

    changeA();

    return 0;

}

void changeA()
{
    int a = 10; 



    int *p;
    p = &a;
    int temp = (int)p;

    a = 11; //直接修改
    printf("%p \n", &a);

    printf("修改之前a: %d \n",a);
    *((int *)temp) = 20; //间接修改

    printf("修改之后a: %d \n",a);

}
