#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10],i,n,largest,smallest;
    printf("Enter the number of elements in array and their values: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    largest=arr[0];
    smallest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    if(arr[i]<smallest)
        smallest=arr[i];
    }
    printf("Largest element in the array is %d\n",largest);
    printf("Smallest element in the array is %d",smallest);
    return 0;
}
