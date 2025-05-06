#include<stdio.h>
struct sample{
    int a;
    char b[10];
    double c;
};
int main( )
{
     struct sample p;
    printf("address of structure members:\n");
    printf("address of integer = %p\n",(p.a));
    printf("address of character = %p\n",(p.b));
    printf("address of double = %p\n",(p.c));
    return 0;
}