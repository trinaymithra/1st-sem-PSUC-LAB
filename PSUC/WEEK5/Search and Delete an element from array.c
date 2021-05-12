#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],i,ele,n,pos;
    printf("Enter the no of elements in the array and their values: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the element to be deleted: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
        if(a[i]==ele)
        {
            pos=i+1;
            for(i=pos-1;i<n;i++)
                a[i]=a[i+1];
            n=n-1;
            break;
        }
    printf("\nArray after deletion is: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
