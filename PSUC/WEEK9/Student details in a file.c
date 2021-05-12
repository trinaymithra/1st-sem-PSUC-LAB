#include<stdio.h>
int main()
{
    FILE *fp1;
    int n,i;
    char c;
    printf("Enter number of students and their details\n");
    scanf("%d",&n);
    fp1=fopen("files","w");
    for (i=0;i<n;i++)
    {
        printf("Enter %d student details\n",i+1);
        while((c=getchar())!=EOF)
        putc(c,fp1);
    }
            fclose(fp1);
            fp1=fopen("files","r");
    for (i=0;i<n;i++)
    {
        while((c=getc(fp1))!=EOF)
        printf("%c",c);
    }
            fclose(fp1);
            return 0;

}
