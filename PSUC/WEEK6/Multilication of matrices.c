#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,n,p,k,sum;
    printf("Enter the dimensions of matrices a and b:");
    scanf("%d%d%d%d",&m,&n,&n,&p);
    printf("\nEnter the elements of Matrix A:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter the elements of Matrix B: ");
     for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            scanf("%d",&b[i][j]);
    sum=0;
    printf("\nMatrix obtained after multiplication is: \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            sum=sum+a[i][k]*b[k][j];
            printf("%d\t",sum);
            sum=0;
        }
    printf("\n");
    }
    return 0;
}
