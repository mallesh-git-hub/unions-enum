#include<stdio.h>
int main( )
{
    int a[10],i,n,target,flag=0;
    printf("enter the array size:\n");
    scanf("%d",&n);
    printf("enter the target element:\n");
    scanf("%d",&target);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(target==a[i])
        {
            printf("\ntarget element = %d\n");
            printf("the target element was founded at index %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nthe target element is not found in the given array.....");
    }
    return 0;
}