#include<stdio.h>

int main() {
  int i,j,n,a[20],temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]<a[j])
        {
        temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
}
}

for(i=0;i<n;i++)
printf("%d \t",a[i]);
}
