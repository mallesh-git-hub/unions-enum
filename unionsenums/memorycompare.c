#include<stdio.h>
#pragma pack(1)
struct mem{
    char name[20];
    int roll;
}m;
union memory{
    char name[20];
    int  roll;
}S;
int main( )
{
    printf("size of structure = %d\n",sizeof(m));
    printf("address = 1.%p 2.%p\n",&(m.name),&(m.roll));
    printf("size of union = %d\n",sizeof(S));
    printf("address = 1.%p 2.%p\n",&(S.name),&(S.roll));
    return 0;
}