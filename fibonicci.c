#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0,i;
    printf("enter the value n");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    a=b+c;
   b=c;
    c=a;
    printf("%d\t",a);
}
    
}
