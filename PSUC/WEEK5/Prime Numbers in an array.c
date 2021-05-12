#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10],i,j,n,prime;
    printf("Enter the number of elements in the array and their values; ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Prime numbers are: \n");
    for(i=0;i<n;i++)
    {
        prime=1;
        for(j=2;j<=(arr[i]/2);j++)
        {
            if(arr[i]%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
            printf("%d\t",arr[i]);
    }
    return 0;
}
