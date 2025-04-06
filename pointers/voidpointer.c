#include<stdio.h>
int main( )
{
    int a=5,i;
    char *x[5]={"rio","rome","london","new delhi","bankok"};
    void *ptr;
    ptr=&a;
    printf("a=%d\n",*(int*)ptr);
    ptr=x;
    printf("The City Names are:\n");
    for(i=0;i<=5;i++)
    {
        printf("%s\n",*((char**)ptr+i));
    }
    return 0;

}    