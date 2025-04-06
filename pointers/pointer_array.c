#include<stdio.h>
int main( )
{
    char*p[10]={'rio','bern','goa','berlin','tokyo'};
    int i,n;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("the cities are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
    return 0;
}