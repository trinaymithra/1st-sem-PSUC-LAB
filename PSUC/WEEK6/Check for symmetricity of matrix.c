#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,f=1;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d",&m);
    printf("\nEnter the elements: ");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            b[i][j]=a[j][i];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            if(a[i][j]!=b[i][j])
            f=0;
        break;
    }
    if(f==1)
        printf("\nMatrix is symmetric");
    else
        printf("\nMatrix is not symmetric");
    return 0;
}
