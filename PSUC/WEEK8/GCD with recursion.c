#include <stdio.h>
#include <stdlib.h>
int rGCD(int a,int b)
{
    if(a==0)
        return b;
        if(b==0)
            return a;
        return(rGCD(b,a%b));
}
int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d,%d is %d",a,b,rGCD(a,b));
    return 0;
}
