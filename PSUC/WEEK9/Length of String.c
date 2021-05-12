#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[25];
    char *ptr=str;
    printf("Enter the string: ");
    scanf("%s",str);
    while(*ptr!=0)
        ptr++;
    printf("Length of the string is %d",ptr-str);
    return 0;
}
