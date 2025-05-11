#include<stdio.h>
void display( );
void main( )
{
    int i;
    for(i=0;i<3;i++)
    {
        display();
    }
    return;
}
void display( )
{
    static int a=5;
    int b=10;
    a++;
    b++;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return;
}