#include<stdio.h>
typedef enum{
    name,
    roll,
    marks
}stu;
int main( )
{
    stu st=roll;
    printf("size of roll: %d\n",sizeof(roll));
    return 0;
}