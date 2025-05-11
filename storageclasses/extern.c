#include<stdio.h>
void fun1(int a, int b);
void fun2(int a, int b);
int main( )
{
    extern int x,y;
    x++;
    y++;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    fun1(x,y);
    fun2(x,y);
    return 0;
}
void fun1(int a,int b)
{
    int sum;
    sum=a+b;
    printf("addition of the two numbers = %d\n",sum);
    return;
}
void fun2(int a,int b)
{
    int mul;
    mul=a*b;
    printf("multiplication of two numbers = %d\n",mul);
    return;
}
int x=10,y=20;