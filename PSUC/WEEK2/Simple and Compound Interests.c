#include <stdio.h>
int main()
{
    float P,N,R,SI,CI;
    printf("Enter the principal amount(P), number of years (N), rate of interest(R): ");
    scanf("%f%f%f",&P,&N,&R);
    SI=(P*N*R)/100;
    CI=P*pow(1+R/100,N)-P;
    printf("SI=%f, CI=%f", SI,CI);
    return 0;
}
