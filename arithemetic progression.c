#include<stdio.h>
int main() {
  int c,b=1,i,a,d;
  scanf("%d%d%d",&c,&a,&d);
  for(i=1;i<=c;i++)
  {
      b*=a+(i*d);
  }
  printf("%d",b);
}
