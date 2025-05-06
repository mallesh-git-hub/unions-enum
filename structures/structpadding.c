#include<stdio.h>
#pragma pack(1)
struct sample{
    float p;
    double q;
    char r;
    int s;
};struct sample m;
int main( )
{
    printf("size of all structure members&variable:\n");
    printf("size of integer = %d\n",sizeof(m.s));
    printf("size of character = %d\n",sizeof(m.r));
    printf("size of float = %d\n",sizeof(m.p));
    printf("size of double = %d\n",sizeof(m.q));
    printf("total size of structure members = %d",sizeof(m));
    return 0;
}