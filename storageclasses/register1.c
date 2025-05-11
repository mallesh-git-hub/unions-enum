#include<stdio.h>
void fun(int n);
int main( )
{
    register int a=10;
    fun(a);
    return 0;
}
void fun(int n)
{
    if(n%2==0)
    {
        printf("it is even number....\n");
    }
    else
    {
        printf("it is odd number.....\n");
    }
    return;
}