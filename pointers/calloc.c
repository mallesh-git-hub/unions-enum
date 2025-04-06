#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int i,n;
    char*Alphabet;
    printf("enter number of alphabets:\n");
    scanf("%d",&n);
    Alphabet=(char*)calloc(n,sizeof(char));
    if(Alphabet==NULL)
    {
        printf("memory is not allocated....\n");
        exit(1);
    }
    else
    {
        printf("enter the of alphabets\n");
        for(i=0;i<n;i++)
        {
            scanf(" %c",Alphabet+i);
        }
        printf("the alphabets are:\n");
        for(i=0;i<n;i++)
        {
            printf("%c\t",*(Alphabet+i));
        }
    }
    free(Alphabet);
    return 0;

}