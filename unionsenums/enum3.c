#include<stdio.h>
enum names{
    Mallesh,
    Penchalaiah,
    phani,
    ramesh,
    akhil
};
enum exnames{
    names
};
int main( )
{
    enum exnames nm=Mallesh;
    printf("size of the name : %d\n",sizeof(nm));
    return 0;
}