#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int i,n,m;
    float *num,*num1,sum=0;
    printf("enter number of numbers:\n");
    scanf("%d",&n);
    num=(float*)malloc(n*sizeof(float));
    if(num==NULL)
    {
        printf("the memory is not allocated...\n");
        exit(1);
    }
    printf("enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
    }
    printf("entered numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\t",num[i]);
    }
    printf("\nthe updated value of n:");
    scanf("%d",&m);
    num1=(float*)realloc(num,m*sizeof(float));
    if(num1==NULL)
    {
        printf("the memory is not allocated....\n");
        exit(1);
    }
    if(m>n)
    {
        printf("enter new numbers:\n");
        for(i=n;i<m;i++)
        {
           scanf("%f",&num1[i]);
        }
        printf("the entered numbers are:\n");
        for(i=0;i<m;i++)
        {
            printf("%.2f\t",num1[i]);
            sum=sum+num1[i];
        }
        printf("\nsum of the all numbers = %.2f",sum);
    }
    if(m<n){
      printf("\nentered numbers are:\n");
      for(i=0;i<m;i++)
      {
       printf("%.2f\t",*(num1+i));
       sum=sum+*(num+i);
      } 
      printf("\nsum of the all numbers = %.2f",sum);
    }
    free(num1);
      return 0;
}