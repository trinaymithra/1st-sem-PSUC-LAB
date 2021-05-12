#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x>0) printf("y=1");
    else if(x==0) printf("y=0");
    else printf("y=-1");
    return 0;
}
