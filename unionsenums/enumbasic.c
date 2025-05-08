#include<stdio.h>
enum weekdays{sun,mon,tue,wed,thu,fri,sat};
enum weekdays today=thu;
int main( )
{
    if(today==thu)
    {
        printf("it is thursday....\n");
        printf("%d",today);
    }
    else
    {
        printf("it is random day....\n");
    }
    return 0;
}