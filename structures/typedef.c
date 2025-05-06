#include<stdio.h>
#pragma pack(1)
typedef struct student{
      char *name;
      float marks;
      int rollnumber;
}student;
student stu={"MALLESH",78.59,354};
int main( )
{
    printf("name=%s\nmarks=%.2f\nrollnumber=%d\n",(stu.name),(stu.marks),(stu.rollnumber));
    return 0;
}