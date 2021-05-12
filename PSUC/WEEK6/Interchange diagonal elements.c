#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],i,j,m,temp;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d",&m);
    printf("\nEnter the elements: ");
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][m-i-1];
        a[i][m-i-1]=temp;
    }
    printf("\nMatrix after rearrangement is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}
