#include <stdio.h>
int main()
{
    int a,b,rev;
    printf("enter a number: ");
    scanf("%d",&a);
    b=a;
    rev=0;
    while(a!=0)
    {
        rev=rev*10+(a%10);
        a=a/10;
    }
    if(b==rev)
        printf("%d is a palindrome",b);
    else
        printf("%d is not a palindrome",b);
    return 0;
}
