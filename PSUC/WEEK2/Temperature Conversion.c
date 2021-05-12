#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in Fahrenheit(F): ");
    scanf("%f",&F);
    C=(5*(F-32))/9.0;
    printf("The Temperature in Centigrade is %f", C);
    return 0;
}
