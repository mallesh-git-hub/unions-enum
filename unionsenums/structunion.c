#include<stdio.h>
#pragma pack(1)
struct student{
    char name[20];
    int roll;
    float marks;
    union grade
    {
       float percentage;
       float cgpa;
    }sheet;
}data;
int main( )
{
    struct student data={"Mallesh",354,940};
    data.sheet.percentage=94;
    printf("Details:\n");
    printf("Name : %s\n",(data.name));
    printf("Roll : %d\n",(data.roll));
    printf("Marks : %.0f\n",(data.marks));
    printf("Percentage : %.0f\n",(data.sheet.percentage));
    data.sheet.cgpa=9.4;
    printf("CGPA : %.1f\n",(data.sheet.cgpa));
    return 0;
}