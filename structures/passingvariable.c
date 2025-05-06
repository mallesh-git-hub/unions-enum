#include<stdio.h>
#pragma pack(1)
struct student{
    char name[20];
    int age;
    float weight;
}person;
void display(struct student person);
int main( )
{
    struct student person1={"Mallesh",22,52};
    struct student person2={"Akhil",23,65};
    display(person1);
    display(person2);
    return 0;
}
void display(struct student person)
{
    printf("Name: %s\n",(person.name));
    printf("age: %d\n",(person.age));
    printf("weight: %.0f\n",(person.weight));
    return;
}