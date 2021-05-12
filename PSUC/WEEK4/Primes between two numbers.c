#include <stdio.h>
int main()
{
    int m,n,i,j,prime;
    printf("Enter the limits: ");
    scanf("%d%d", &m,&n);
    for(i=m;i<=n;i++)
    {
        prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
            if(prime==1)
                printf("%d\t",i);
    }
    return 0;
}
