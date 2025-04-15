#include<stdio.h>
#include<string.h>
int main( )
{
    char s1[20],s2[20];
    printf("enter two strings:\n");
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    strcat(s1,s2);
    printf("after concatination the two strings are:");
    puts(s1);
    puts(s2);
    return 0;
}