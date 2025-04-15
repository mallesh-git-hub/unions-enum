#include<stdio.h>
#include<ctype.h>
int main( )
{
    char ch;
    printf("enter a character:\n");
    ch=getchar( );
    if(isalpha(ch))
    {
        printf("it is a alphabet...\n");
        putchar(ch);
    }
    else
    {
        printf("it is not alphabet....\n");
    }
    return 0;
}