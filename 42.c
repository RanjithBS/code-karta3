#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2;
    char a[20],b[20];
    printf("enter the first string");
gets(a);
    printf("enter the second string");
    gets(b);
    n1=strlen(a);
    n2=strlen(b);
  if(n1>n2)
    {
        printf("%s",a);
    }
    else 
    {
        printf("%s",b);
    }
   
     
}
