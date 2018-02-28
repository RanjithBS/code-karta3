#include<stdio.h>

int main() {
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("values before swaping %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nvalues after swaping %d %d",a,b);
}
