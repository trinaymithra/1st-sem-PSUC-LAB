#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],i,j,m,n,ele,occured;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("Enter the search element: ");
    scanf("%d",&ele);
    occured=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]==ele)
            occured=occured+1;
        printf("Number of times %d occured in the matrix is %d",ele,occured);
    return 0;
}
