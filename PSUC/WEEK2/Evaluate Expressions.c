#include <stdio.h>
int main()
{
    float a,b,c,d, W,X,Y,Z;
    printf("Enter the values of a,b,c,d: ");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    W=(a+b)*c/d;
    X=((a+b)*c)/d;
    Y=a+(b*c)/d;
    Z=(a+b)*(c/d);
    printf("W=%f, X=%f, Y=%f, Z=%f", W,X,Y,Z);
    return 0;
}
