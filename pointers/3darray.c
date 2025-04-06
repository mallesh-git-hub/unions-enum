#include<stdio.h>
int main( )
{
    int a[2][3][3];
    int i,j,k;
    printf("enter the array elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("the array elements are:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",*(*(*(a+i)+j)+k));
            }
        }
        printf("\n");
    }
}