#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100][100],i,j,m,trace,sum;
    float norm;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d",&m);
    printf("\nEnter the elements: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    trace=0;
     for(i=0;i<m;i++)
            trace=trace+a[i][i];
    norm=0;
    sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            sum=sum+pow(a[i][j],2);
    }
    norm=pow(sum,0.5);
    printf("\nTrace of matrix=%d \nNorm of the matrix is %f",trace,norm);
    return 0;
}
