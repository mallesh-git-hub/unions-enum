#include<stdio.h>
#pragma pack(1)
struct student{
    char *name;
    int rollnumber;
    float marks;
};
int main( )
{
    struct student stu1={"MALLESH",354,92.54};
    struct student stu2;
    stu2=stu1;
    printf("Name: %s\nRollnumber: %d\nMarks: %.2f\n",(stu2.name),(stu2.rollnumber),(stu2.marks));
    return 0;
}