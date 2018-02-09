#include<stdio.h>
#include<string.h>
int main(void)
{
	
	char a[80];
	int i=0, len, j;
	gets(a);
	len=strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				a[j]=a[j+1];
			}
		len--;
		}
	}
	printf("%d",len);
return 0;
}
