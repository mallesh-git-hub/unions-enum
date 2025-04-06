#include<stdio.h>
int value(int p,int q);
int main( )
{
    int a=10,b=20;
    printf("before the calling the values are a= %d & b=%d\n",a,b);
    value(a,b);
    printf("after calling the values are a=%d & b=%d\n",a,b);
    return 0;
}
int value(int p,int q)
{
    p++;
    q++;
    return p;
}