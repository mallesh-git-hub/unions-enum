#include<stdio.h>
int a=30;
int b=50;
void fun( );
int main( )
{
    int a=40;
    {
        int a=30,b=50;
        printf("block1 scope: %d %d\n",a,b);
    }
    {
        ++a;
        ++b;
        printf("block2 scope: %d %d\n",a,b);
    }
    printf("inside main function: %d %d\n",a,b);
    fun();
    return 0;
}
void fun( )
{
    int b=10;
    --a;
    ++b;
    printf("inside function: %d %d\n",a,b);
    return;
}