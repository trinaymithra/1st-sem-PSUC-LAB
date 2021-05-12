# include <stdio.h>
# include <math.h>
int main()
{
 int i, n ;
 float x, num, sum, term ;
 printf("Enter the value for x: ") ;
 scanf("%f",&x) ;
 printf("\nEnter number of terms: ") ;
 scanf("%d",&n) ;
 num=x ;
 x=x*3.14159/180 ;
 term=x;
 sum=x ;
 for(i=1;i<=n;i++)
 {
  term=term*((-1)*x*x)/(2*i*(2*i+1)) ;
  sum=sum+term ;
 }
 printf("\nSine value of %f is : %f", num, sum) ;
 return 0;
}
