#include<stdio.h>
void fun(char m[],int y);
int main( )
{
    char *s[10];
    int n,i;
    printf("enter the array size:\n");
    scanf("%d",&n);
    printf("enter the city names:\n");
    for(i=0;i<n;i++)
    {
    scanf("%s",s[i]);
    }
    fun(*s,n);
    return 0;
}
void fun(char m[],int y)
{
      int i;
      printf("the city names are:\n");
      for(i=0;i<y;i++)
      {
        printf("%s\n",m[i]);
      }
    return;
}