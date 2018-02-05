#include<stdio.h>

int main() {
  int i,j,n,a[20],temp,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      }
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(a[i]<a[j])
        {
        temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
}
}
c=(n+1)/2;
printf("%d \t",a[c]);
}
