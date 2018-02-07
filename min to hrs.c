#include<stdio.h>
int main() {
  int min,hrs;
  scanf("%d",&min);
  hrs=min/60;
  min=min%60;
  printf("%d:%d",hrs,min);
  return 0;
}
