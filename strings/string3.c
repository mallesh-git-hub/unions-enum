#include<stdio.h>
int main( )
{
    char city[10];
    printf("enter a city:\n");
    fgets(city,sizeof(city),stdin);
    printf("entered city name is:\n");
    puts(city);
    return 0;
}