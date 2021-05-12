#include <stdio.h>
#include <stdlib.h>
int fib(int a)
{
    if(a==1)
        return 0;
        else if(a==2) return 1;
    else
        return (fib(a-1)+fib(a-2));
}
int main()
{
    int a,i;
    printf("Enter upto which term of fibonacci series is to be printed: ");
    scanf("%d",&a);
    printf("Fibonacci series is: \n");
    for(i=1;i<a;i++)
    printf("%d\t",fib(i));
    return 0;
}
