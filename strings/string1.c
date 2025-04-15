/*#include<stdio.h>
int main( )
{
    char s[10]={'M','A','L','L','E','S','H','\0'};
    int i;
    for(i=0;i<8;i++)
    {
        printf("the character is %c\n",s[i]);
        printf("address of %c character is %p\n",s[i],s+i);
    }
    return 0;
}*/


#include<stdio.h>
int main( )
{
    char s[]="MALLESH";
    char *si="MALLESH";
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        printf("%d.the character is %c\n",i+1,*(si+i));
        printf("   the address for %c is %p\n",*(si+i),si+i);
    }
    return 0;
}