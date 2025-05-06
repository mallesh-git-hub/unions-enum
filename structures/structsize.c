#include<stdio.h>
struct sample{
    int a;
    float b;
    char c;
    double d;
};  struct sample f;
int main( )
{
    printf("size of all the structure members:\n");
    printf("size of integer = %d\n",sizeof(f.a));
    printf("size of float = %d\n",sizeof(f.b));
    printf("size of caharacter = %d\n",sizeof(f.c));
    printf("size of double= %d\n",sizeof(f.d));
    printf("total size = %d",sizeof(f));
    return 0;

}
