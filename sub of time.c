#include<stdio.h>
int main() {
  int min1,hrs1,min2,hrs2,hrs3,min3;
  scanf("%d %d %d %d",&hrs1,&min1,&hrs2,&min2);
   min3=min1-min2;
   min3=min3%60;
 hrs3=(hrs1-hrs2)+(min3/60);
  printf("%d:%d",hrs3,min3);
  return 0;
}
