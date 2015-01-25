/**
    选择排序, 当形参是数组时，作为指针处理

*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void printfArray(int *a)
{
    int i = 0;
    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
}

//1数组做函数参数，会退化为指针
void printfArray2(int *a, int num)
{
    int i = 0;
    for (i=0; i<num; i++)
    {
        printf("%d ", a[i]);
    }
}

//2在形参里面出现的char buf[30] int a[10] c/c++编译器会把它当做指针，也不会主动的多分配内存
//day2以后
void printfArray3(int a[10])
{
    int i = 0;
    int num1 = sizeof(a);
    int num2 = sizeof(*a);
    int num = sizeof(a)/sizeof(*a);
    printf("num1:%d, num2:%d, num:%d \n", num1, num2, num);
    for (i=0; i<num; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int i = 0, j = 0;
    int a[10] = {1, 3, 44, 2, 3, 44, 5, 5,6, 67};
    int tmp = 0;

    int num1 = sizeof(a); //数据类型不一样

    printf("\n排序之前 %d:", num1);
//  for (i=0; i<10; i++)
//  {
//      printf("%d ", a[i]);
//  }
    printfArray3(a);

    for(i=0; i<10; i++)
    {
        for (j=i+1;j<10; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[i]; 
                a[i] = a[j]; 
                a[j] = tmp;
            }
        }
    }

    printf("\n排序之后:");
//  for (i=0; i<10; i++)
//  {
//      printf("%d ", a[i]);
//  }
    printfArray3(a);
    return 0;
    //system("pause");
}
