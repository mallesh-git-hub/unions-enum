#include<stdio.h>
int add(int a,int b);
int main( )
{
    auto int p=20,q=50,result=0;
    result = add(p,q);
    printf("summation of two numbers is : %d",result);
    return 0;
}
int add(int a,int b)
{
    auto int sum=0;
    sum=a+b;
    return sum;
}