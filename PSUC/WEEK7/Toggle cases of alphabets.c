#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    int i=0,j=0;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        else if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
        i++;
    }
    puts(str);
    return 0;
}
