#include <stdio.h>
int main()
{
    int N,i,j,a=1;
    printf("Enter the value of N to generate floyd's triangle: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
