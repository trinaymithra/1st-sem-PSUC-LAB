#include <stdio.h>
int main()
{
    float r,volume,sa;
    printf("Enter the radius:");
    scanf("%f", &r);
    volume=(4*3.1416*r*r*r)/3;
    sa=4*3.1416*r*r;
    printf("Volume=%f, Surface Area=%f",volume,sa);
    return 0;
}
