#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d", &a, &b);
    printf("sum=%d\ndifference=%d\nproduct=%d\nquotient=%d",a+b,a-b,a*b,a/b);
    return 0;
}
