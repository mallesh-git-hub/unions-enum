#include<stdio.h>
union example{
    char name;
    int a;
    float value;
    double b;
}s;
int main( )
{
    printf("sizeof character = %d\n",sizeof(char));
    printf("sizeof integer = %d\n",sizeof(int));
    printf("sizeof float = %d\n",sizeof(float));
    printf("sizeof double = %d\n",sizeof(double));
    printf("sizeof union = %d\n",sizeof(s));
    return 0;
}