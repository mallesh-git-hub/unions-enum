#include<stdio.h>
int mul(int*a,int*b);
int main( )
{
    auto int p=10,q=20;
    auto int result=0;
    result=mul(&p,&q);
    printf("multiplication of the two numbers is: %d",result);
    return 0;
}
int mul(int*a,int*b)
{
    auto int m;
    m=(*a * *b);
    return m;
}