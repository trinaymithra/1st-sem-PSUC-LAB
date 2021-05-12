#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,n,x,y,p,q,temp;
    printf("Enter the matrix: ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[i][j];
    printf("\nEnter which rows are to be interchanged: ");
    scanf("%d%d",&x,&y);
    for(j=0;j<n;j++)
    {
        temp=a[x-1][j];
        a[x-1][j]=a[y-1][j];
        a[y-1][j]=temp;
    }
    printf("\nMatrix after interchanging rows is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
     printf("\nEnter which columns are to be interchanged: ");
    scanf("%d%d",&p,&q);
    for(i=0;i<m;i++)
    {
        temp=b[i][p-1];
        b[i][p-1]=b[i][q-1];
        b[i][q-1]=temp;
    }
    printf("\nMatrix after interchanging columns is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    return 0;
}
