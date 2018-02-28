#include <stdio.h>
#include<string.h>
int main(void) {
	char ch[100];
	int a,i;
	gets(ch);
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("%s\n",ch);
	}
	return 0;
}
