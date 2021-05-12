#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[25],n,i,*ptr=arr;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    for(i=1;i<n;i++)
        if(*(ptr+i)>*ptr)
        *ptr=*(ptr+i);
    printf("Maximum number in the input integer array is %d",*ptr);
    return 0;
}
