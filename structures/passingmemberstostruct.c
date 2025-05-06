#include<stdio.h>
#include<string.h>
#pragma pack(1)
struct student{
    char name[20];
    int roll;
    int marks;
};
struct student stu1={"Mallesh",354,940};
void display(char name[],int roll,int marks);
int main( )
{
    struct student stu2;
    strcpy(stu2.name,"Ravi");
    stu2.roll=308;
    stu2.marks=930;
    printf("students details:\n");
    display((stu1.name),(stu1.roll),(stu1.marks));
    printf("2.Name: %s\n  Roll:%d\n  Marks=%d\n",(stu2.name),(stu2.roll),(stu2.marks));
    return 0;
}
void display(char name[],int roll,int marks)
{
    printf("1.Name: %s\n  Roll:%d\n  Marks=%d\n",(stu1.name),(stu1.roll),(stu1.marks));
    return;
}