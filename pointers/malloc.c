#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int i,n;
    float *temperature,sum=0,avg;
    printf("enter number of temperature readings:\n");
    scanf("%d",&n);
    temperature=(float*)malloc(n*sizeof(int));
    if(temperature==NULL)
    {
        printf("the memory is not allocated...\n");
        exit(1);
    }
    else
    {
        printf("enter temperature readings:\n");
        for(i=0;i<n;i++)
        {
            scanf("%f",temperature+i);
        }
        printf("the temperature readings are:\n");
        for(i=0;i<n;i++)
        {
            printf("%.2f\t",*(temperature+i));
            sum=sum+temperature[i];
        }
        avg=sum/n;
        printf("\nthe average temperature = %.2f",avg);
    }
    free(temperature);
    return 0;

}