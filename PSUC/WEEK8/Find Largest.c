#include <stdio.h>
#include <stdlib.h>
int largest(int series[50],int n)
{
    int i,large;
    large=series[0];
    for(i=1;i<n;i++)
        if(series[i]>large)
            large=series[i];
        return(large);
}
int main()
{
    int series[50],i,n;
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&series[i]);
    printf("Largest number is %d",largest(series,n));
    return 0;
}
