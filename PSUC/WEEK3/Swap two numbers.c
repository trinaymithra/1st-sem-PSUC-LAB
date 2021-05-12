#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the values for a,b: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values of a,b after swapping are %d,%d",a,b);
    return 0;
}
