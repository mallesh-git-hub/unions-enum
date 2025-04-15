#include<stdio.h>
#include<string.h>
int main( )
{
    char str[50];
    printf("enter a character:\n");
    scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]",str);
    printf("the character is:%s",str);
    return 0;
}