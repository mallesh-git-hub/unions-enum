#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int *s[2][3],i,j;
    s=(int*)malloc(2*3*sizeof(int));
    if(s==NULL)
    {
        printf("the memory is not allocated...\n");
        exit(1);
    }
    else
    {
        printf("enter the elements:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",*(s+i)+j);
            }
        }
        printf("the matrix is:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",*(*(s+i)+j));
            }
        }
    }
}