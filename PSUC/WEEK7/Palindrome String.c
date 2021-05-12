#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    int i,pal,n;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    n=i;
    pal=1;
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
            pal=0;
            break;
    }
    if(pal==1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
    return 0;
}
