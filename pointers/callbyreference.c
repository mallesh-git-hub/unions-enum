#include<stdio.h>
int ref(int*x,int*y);
int main( )
{
    int a=5,b=10;
    printf("before calling the values are a=%d 0& b=%d\n",a,b);
    ref(&a,&b);
    printf("after calling the values are a=%d & b=%d",a,b);
    return 0;
}
int ref(int*x,int*y)
{
    (*x)++;
    (*y)++;
}    