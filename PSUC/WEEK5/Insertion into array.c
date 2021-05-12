#include<stdio.h>
int main()
{
    int n,a[10],i,pos,ele;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe element to be inserted and where\n");
    scanf("%d%d",&ele,&pos);
    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=ele;
    n=n+1;
    printf("The new array is; ");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    return 0;
}
