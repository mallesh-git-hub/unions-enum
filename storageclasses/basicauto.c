#include<stdio.h>
int main( )
{
    auto int a=5;
    {
        auto int b;
        printf("value inside the block1 = %d\n",b);
    }
    {
       printf("value inside the black2 = %d\n",a);
    }
    printf("inside the main function = %d\n",a);
    return 0;
}