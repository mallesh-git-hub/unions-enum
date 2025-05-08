#include<stdio.h>
union sample
{
    char alphabet;
    int num;
}m;
int main( )
{
    union sample m;
    m.alphabet= 'S';
    printf("Alphabet= %c\n",(m.alphabet));
    m.num=100;
    printf("Number = %d",(m.num));
    return 0;
}
