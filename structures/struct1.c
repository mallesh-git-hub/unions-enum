#include<stdio.h>
struct data{
    char* mem1;
    int mem2;
    float mem3;
}; struct data a={"MALLESH",22,166};
int main( )
{
   printf("My data:\n");
   printf("Name:%s\n",(a.mem1));
   printf("Age:%d\n",(a.mem2));
   printf("Height:%.2f",(a.mem3));
   return 0;
}