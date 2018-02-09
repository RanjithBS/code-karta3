#include <stdio.h>

int main(void) {
	
	char a[100];
	int i,k,count=1;
	scanf("%[^\n]s",a);
	for(k=0;a[k]!='\0';++k)
	{
		
	}
	for(i=0;i<k;i++)
	{
	
	if(a[i]==' '||a[i]=='/n'||a[i]=='\t')
	{
		count++;
	}
		
	}
	printf("%d",count);
	return 0;
}
