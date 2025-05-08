#include<stdio.h>
enum square{
    area,
    perimeter
};
enum square parametre=area;
int main( )
{
    printf("size of area: %d\n",sizeof(parametre));
    return 0;
}
