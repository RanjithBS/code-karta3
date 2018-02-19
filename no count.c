#include<stdio.h>

int main()
{
  char ch[25];
  int a,i,count=0;
  printf("enter the string: ");
  gets(ch);
 for(a=0;ch[a]!='\0';a++)
 {
 }
 for(i=0;i<a;i++)
 {
 if(ch[i]>='0'&&ch[i]<='9')
 {      
     count++;
}

 }
  printf("%d",count);
}
