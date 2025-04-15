#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void passingstring(char *str);
int main( )
{
    char *string;
    string=(char*)malloc(100*sizeof(char));
    printf("enter string name:\n");
    fgets(string,100,stdin);
    passingstring(string);
    free(string);
    return 0;
}
void passingstring(char *str)
{
    puts(str);
    return;
}