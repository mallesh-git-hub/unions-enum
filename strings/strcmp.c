#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],s3[20];
    int result;
    printf("enter city names:\n");
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    fgets(s3,sizeof(s3),stdin);
    if(strcmp(s1,s2)==0&&strcmp(s2,s3)==0)
    {
        printf("strings are same....\n");
    }
    else
    {
        printf(" the strings are not same...\n");
    }
    return 0;
}