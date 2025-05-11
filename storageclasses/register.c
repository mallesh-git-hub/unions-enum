#include<stdio.h>
int main( )
{
    register int i,sum=0;
    for(i=0;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("sum of first 10 natural numbers: %d\n",sum);
    return 0;
}