#include<stdio.h>
union endian{
    int x;
    char a[4];
}var;
int main( )
{
    var.x=1;
    if(var.a[0]==1)
    {
        printf("Little endian....");
    }
    else
    {
        printf("Big endian.....");
    }
    return 0;
}
