#include<stdio.h>

int main() {
  int i,n,a[200];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      }
for(i=0;i<n;i++)
printf("%d %d \n",a[i],i);
}
