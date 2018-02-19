#include <stdio.h>
 
int main()
{
    char str[100];
    int i=0,a,count;
     printf("Enter a string: ");
    gets(str);
     for(count=0;str[count]!='\0';count++)
    {
    }
    for(a=0;a<count;a++)
    {
if(str[a]>='0' && str[a]<='9')
else if(str[a]>='A' && str[a]<='Z')
else if(str[a]>='a' && str[a]<='z')
else if(str[a]>=' ')
else
i++;
                                
     
    }
 
    printf("%d",i);
 
    return 0;
}
