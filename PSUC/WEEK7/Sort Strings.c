#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100][100],temp[100];
    int i,j,n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    printf("Enter the strings: ");
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
    }
    printf("\n The sorted list is: \n");
    for(i=0;i<n;i++)
        printf("%s\t",str[i]);
    return 0;
}

