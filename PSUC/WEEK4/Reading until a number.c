#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,cp,cc,i,c;
    cp=0;cc=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n!=0&&n!=1&&n!=-1)
        {
            c=1;
            for(i=2;i<=n;i++)
            {
                if(n%i==0&&n!=2)
                    c=0;
            }
            if(c==1)
                cp++;
            else
                cc++;
        }
    }while(n!=-1);
        printf("\nThe number of primes encoutered is %d",cp);
        printf("\nThe number of composite numbers encountered is %d",cc);
    return 0;
}
