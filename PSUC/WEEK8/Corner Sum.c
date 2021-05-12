#include <stdio.h>
int CornerSum(int matrix[10][10],int m, int n)
{
    int sum;
    sum=matrix[0][0]+matrix[0][n-1]+matrix[m-1][0]+matrix[m-1][n-1];
    return(sum);
}
int main()
{
    int matrix[10][10],m,n,i,j,sum;
    printf("Enter the dimensions of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix: ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&matrix[i][j]);
    sum=CornerSum(matrix,m,n);
    printf("Sum of corner elements is %d",sum);
    return 0;
}
