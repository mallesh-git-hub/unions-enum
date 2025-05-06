#include<stdio.h>
#pragma pack(1)
struct human{
    char name[20];
    int age;
    float weight;
}*hptr;
void display(struct human *hptr);
int main( )
{
    struct human h1={"Mallesh",22,52.5};
    struct human h2={"Penchalaiah",22,60};
    display(&h1);
    display(&h2);
    return 0; 
}
void display(struct human *hptr)
{
    printf("Name: %s\n",hptr->name);
    printf("age: %d\n",hptr->age);
    printf("weight: %.0f\n",hptr->weight);
    return;
}