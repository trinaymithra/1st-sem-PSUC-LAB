#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,m;
    float r1,r2,re,im,disc;
    printf("enter the values of a,b,c: ");
    scanf("%d%d%d", &a,&b,&c);
    disc=b*b-4*a*c;
    re=-b/(2*a);
    if(disc<0) m=1;
    if(disc==0) m=2;
    if(disc>0) m=3;
    switch(m)
    {
        case 1:
            printf("Roots are imaginary\n");
            im=pow(fabs(disc),0.5)/(2*a);
            printf("r1=%f+i%f",re,im);
            printf("r2=%f-i%f", re,im);
        break;
        case 2:
            printf("Roots are real and equal\n");
            printf("Root is %f", re);
        break;
        case 3:
            printf("Roots are real and distinct\n");
            r1=(-b+sqrt(disc))/(2*a);
            r2=(-b-sqrt(disc))/(2*a);
            printf("roots are %f and %f",r1,r2);
        break;
    }
    return 0;
}
