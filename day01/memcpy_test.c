#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void memcpy(void* dst, void* src, int i)
{
    unsigned char *d = (unsigned char*)dst;
    unsigned char *s = (unsigned char*)src;
    
    while(i!=0)
    {
        *(d++) = *(s++);
        i--;
    }
}

int main()
{
    char *p="nihao";
    char *q=(char*)malloc(10);
    memcpy(q, p ,5);
    printf("q=%s\n", q);    
    return 0;
}
