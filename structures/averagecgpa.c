#include<stdio.h>
#pragma pack(1)
typedef struct average{
    char name[20];
    float cgpa;
}average;
average stu[10];
int main( )
{
    int i;
    float avg=0,sum=0;
    printf("enter five students data:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s %f",(stu[i].name),&(stu[i].cgpa));
    }
    printf("five students data is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d.Name: %s\n Cgpa: %.1f\n",i+1,(stu[i].name),(stu[i].cgpa));
        sum=sum+(stu[i].cgpa);
    }
    printf("the average cgpa of 5 students is:\n");
    avg=sum/5;
    printf("avg = %.1f\n",avg);
    return 0;
}