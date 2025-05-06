#include<stdio.h>
#pragma pack(1)
struct result{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
};
struct student
{
    char name[10];
    int rollnumber;
    struct result stu;
} s;
int main( )
{
    printf("enter a name: ");
    scanf("%s",&(s.name));
    printf("\nenter rollnumber: ");
    scanf("%d",&(s.rollnumber));
    printf("\nenter the result of the student: ");
    scanf("%d %d %d %d %d",&(s.stu.sub1),&(s.stu.sub2),&(s.stu.sub3),&(s.stu.sub4),&(s.stu.sub5));
    printf("The student details are:\n");
    printf("Name: %s\n",(s.name));
    printf("Rollnumber: %d\n",(s.rollnumber));
    printf("result:%d\t%d\t%d\t%d\t%d",(s.stu.sub1),(s.stu.sub2),(s.stu.sub3),(s.stu.sub4),(s.stu.sub5));
    return 0;  
}