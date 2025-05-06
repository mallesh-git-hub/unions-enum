#include<stdio.h>
#pragma pack(1)
struct student{
    char name[10];
    int rollnumber;
    float height;
};
struct student stu={"Mallesh",354,165},*ptr;
struct student *ptr=&stu;
int main( )
{
    printf("Student Details:\n");
    printf("Name: %s\n",(*ptr).name);
    printf("Rollnumber: %d\n",(*ptr).rollnumber);
    printf("Height: %.0f\n",(*ptr).height);
    return 0;
}