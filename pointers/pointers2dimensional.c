#include<stdio.h>
int main( )
{
    int a[3][4],i,j;
    printf("enter the each array element:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
         printf("address of the %d element in the array: %p\n",i,a+i);
         printf("address of the %d element in the array: %p\n",i,*(a+i));
         for(j=0;j<4;j++)
         {
            printf("value in the %dth row and %dth column is: %d\n",i,j,*(*(a+i)+j));
         }
    }    
    return 0;
}