#include<stdio.h>
#include<string.h>
int main( )
{
    char s[100];
    int lentgh;
    printf("enter a name:\n");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")]='\0';
    lentgh=strlen(s);
    printf("length of the string is %d",lentgh);
    return 0;
}