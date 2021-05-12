#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,i,j;
    printf("Enter values of n & k\n");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=k;j++)
                printf("%d\t",i*j);
            printf("\n");
        }
    return 0;
}
