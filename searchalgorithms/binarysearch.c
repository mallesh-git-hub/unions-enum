#include<stdio.h>
int main( )
{
    int i,n,a[10],key,mid,least,most;
    printf("enter the array size:\n");
    scanf("%d",&n);
    printf("enter the key element for searching purpose:\n");
    scanf("%d",&key);
    least=0,most=n-1;
    printf("enter array elements in sorted array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
   while(least<=most)
   {
    mid=(least+most)/2;
    if(key<a[mid])
    {
        most=mid-1;
    }
    else if(key>a[mid])
    {
        least=mid+1;
    }
    else if(key==a[mid])
    {
        printf("\nelement is found at index %d",mid);
        printf("\nsearching element is %d",key);
        break;
    }
   }
   return 0;
}