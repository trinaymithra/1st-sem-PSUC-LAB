#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0,greg,temp;
    printf("Enter a 3-digit number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        greg=temp%10;
        sum=sum+greg*greg*greg;
        temp=temp/10.0;
    }
    if(n==sum)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);
    return 0;
}
