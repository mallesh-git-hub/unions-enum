#include<stdio.h>
struct student{
    char name[10];
    int rollnumber;
    float marks;
};
int main( )
{
    int i;
    struct student stu[10];
    printf("enter name,rollnumber,marks:\n");
    for(i=0;i<2;i++)
    {
        scanf(" %s%d%f",&(stu[i].name),&(stu[i].rollnumber),&(stu[i].marks));
    }
    printf("the student details:\n");
    for(i=0;i<2;i++)
    {
        printf("%d.Name= %s\n  Rollnumber=%d\n  Marks=%f\n",i+1,(stu[i].name),(stu[i].rollnumber),(stu[i].marks));
    }
    return 0;
}