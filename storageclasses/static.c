#include<stdio.h>
void fun(int x,int y);
int main( )
{
    static int a=5,b;
    printf("enter a number:\n");
    scanf("%d",&b);
    fun(a,b);
    fun(a,b);
    return 0;
}
void fun(int x,int y)
{
    static int c;
    ++x;
    ++y;
    c=c+x+y;
    printf("sum = %d\n",c);
    return;
}