#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i=0,count=1;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' '&&str[i+1]!=' ')
            count++;
            i++;
    }
    printf("Number of words are: %d",count);
    return 0;
}
