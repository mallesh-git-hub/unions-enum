#include<stdio.h>
enum gender{male,female,others};
enum gender customer;
int main( )
{
    if(customer==male)
    {
        printf("discount is 25%....\n");
    }
    else if(customer==female)
    {
        printf("discount is 50%...\n");
    }
    else
    {
        printf("discount is 75%...\n");
    }
    return 0;
}
