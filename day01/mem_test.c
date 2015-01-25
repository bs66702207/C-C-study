#include<string.h>
#include "stdio.h"
#include "stdlib.h"

char g_Buf[10];

char * Demo31_Number2String_const(int i)
{
    if (i==1) 
    {
        return "one";
    } 
    else if (i==2) 
    {
        return "two";
    } 
    else if (i==3) 
    {
        return "three";
    } 
    else 
    {
        return "err";
    }
}

//debug release
//mult thread
char * Demo32_Number2String_globle(int i)
{
    memset(g_Buf, 0, sizeof(g_Buf));

    if (i==1) 
    { 
        strcpy(g_Buf, "one");
    } 
    else if (i==2) 
    {
        strcpy(g_Buf, "two");
    } 
    else if (i==3) 
    {
        strcpy(g_Buf, "three");
    }
    else
    {
        strcpy(g_Buf, "err");
    }
    return g_Buf ;
}

//debug release
char * Demo33_Number2String_stack(int i)
{
    char tmp[10];
    memset(tmp, 0, sizeof(tmp));
    if (i==1) 
    { 
        strcpy(tmp, "one");
    } 
    else if (i==2) 
    {
        strcpy(tmp, "two");
    } 
    else if (i==3) 
    {
        strcpy(tmp, "three");
    } 
    else 
    {
        strcpy(tmp, "err");
    }
    return tmp ;
}

int main()
{
    int rv = 0;
    char *pTmp = NULL;
    char buf[20];

    printf("Demo31_Number2String_const(1)--->%s \n", Demo31_Number2String_const(1));
    printf("Demo32_Number2String_globle(2)--->%s \n", Demo32_Number2String_globle(2));
    printf("Demo33_Number2String_stack(3)--->%s \n", Demo33_Number2String_stack(3));
    return rv;
}
