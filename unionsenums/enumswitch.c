#include<stdio.h>
enum weekdays{sun,mon,tue,wed,thu,fri,sat};
enum weekdays day=mon;
int main( )
{
    switch(day)
    {
        case sun: printf("it is sunday....\n");
                    break;
        case mon: printf("it is monday....\n");
                    break;
        case tue: printf("it is tuesday....\n");
                    break;
        case wed: printf("it is wednsday....\n");
                    break;
        case thu: printf("it is thursday...\n");
                    break;
        case fri: printf("it is friday....\n");
                    break;
        default: printf("it is saturday...\n");
                    break; 
    }
    return 0;
}