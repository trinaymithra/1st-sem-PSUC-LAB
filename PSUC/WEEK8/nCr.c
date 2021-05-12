#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    int i,prod;
    prod=1;
    if(n>0)
    {
    for(i=1;i<=n;i++)
        prod=prod*i;
        return (prod);
    }
    else
        return 1;
}
int main()
{
    int comb,n,r;
    printf("Enter the values of n and r: ");
    scanf("%d%d",&n,&r);
    comb=(fact(n)/(fact(n-r)*fact(r)));
    printf("Value of %dC%d is %d",n,r,comb);
    return 0;
}
