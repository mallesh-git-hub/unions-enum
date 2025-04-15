#include<stdio.h>
#include<string.h>
int main( )
{
    char s[20],p[20];
    printf("enter two string names:\n");
    fgets(s,sizeof(s),stdin);
    fgets(p,sizeof(p),stdin);
    printf("before copy the two strings are:\n");
    puts(s);
    puts(p);
    strcpy(p,s);
    printf("after copy the two strings are:\n");
    puts(p);
    return 0;
}