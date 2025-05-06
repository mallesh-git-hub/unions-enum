#include<stdio.h>
struct student{
    char name[20];
    int rollnumber;
    float marks;
};
int main( )
{
    struct student s1={"MALLESH",354,80};
    struct student s2;
    s2=s1;
    printf("Sudent details:\n");
    printf("s1= %s\t%d\t%.2f\n",(s1.name),(s1.rollnumber),(s1.marks));
    printf("s2= %s\t%d\t%.2f\n",(s2.name),(s2.rollnumber),(s2.marks));
    return 0;
}