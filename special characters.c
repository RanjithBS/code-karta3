
#include<stdio.h>
void main()
{
    char str[100];
    int letters=0, no=0, spclchar=0, i=0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            letters++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            no++;
        }
        else
        {
            spclchar++;
        }

        i++;
    }

    printf("Special characters = %d", spclchar);

}
