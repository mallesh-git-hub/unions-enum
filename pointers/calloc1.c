#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int i,n;
    char**BTech;
    printf("enter number of cources in BTech:\n");
    scanf("%d",&n);
    BTech=(char**)calloc(n,sizeof(char*));
    if(BTech==NULL)
    {
        printf("memory is not allocated....\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
       BTech[i]=(char*)calloc(50,sizeof(char));
    if(BTech[i]==NULL)
    {
        printf("the memory is not allocated...\n");
        exit(1);
    }
   }
        printf("enter the names of the cources:\n");
        for(i=0;i<n;i++)
        {
            scanf(" %s",BTech+i);
        }
        printf("the list of the cources in BTech:\n");
        for(i=0;i<n;i++)
        {
            printf(" %s\t",*(BTech+i));
        }
    free(BTech);
    return 0;

}