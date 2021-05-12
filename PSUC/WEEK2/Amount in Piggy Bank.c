#include <stdio.h>
int main()
{
    int R20,R10,R5,P50;
    float totalmoney;
    printf("Enter number of 20rs notes, 10rs notes, 5rs notes, 50p coins: ");
    scanf("%d%d%d%d", &R20,&R10,&R5,&P50);
    totalmoney=20*R20+10*R10+5*R5+0.5*P50;
    printf("Total money is %f", totalmoney);
    return 0;
}
