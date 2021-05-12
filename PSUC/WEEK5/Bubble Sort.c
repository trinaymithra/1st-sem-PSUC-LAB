#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input,n,a[10],i,j,temp,go;
    printf("Enter numbers of elements for array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nFor ascending order press 1 \nFor descending order press 2\nEnter input: ");
    scanf("%d",&input);
    do
    {
    switch(input)
    {
    case 1:
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    break;
    case 2:
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    break;
    }
    printf("\nThe sorted numbers are:");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);

    printf("\nfor A.O. press 1, for D.O. press 2 else press 0: ");
    scanf("%d",&input);
    }while(input==1||input==2);
    return 0;
}
