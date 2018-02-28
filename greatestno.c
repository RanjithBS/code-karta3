#include<stdio.h>

int main() {
  int i,j,a[10],temp;
  for(i=0;i<10;i++)
  {
      scanf("%d",&a[i]);
      }
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
}
}

printf("%d",a[0]);
}
