#include<stdio.h>
int main()
{
    int b[5],*p;
    int (*ptr)[5];
    p=b;
    ptr=&b;
    printf("address = %p\n address = %p\n",p,ptr);
    p++;
    ptr++;
    printf("adress = %p\n address = %p\n",p,ptr);
    return 0;
}