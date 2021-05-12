#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("files","r");
    fp2=fopen("filescopy","w");
    printf("Contents of file 1 are\n");
    while((c=getc(fp1))!=EOF)
        {
            printf("%c",c);
        }
        while((c=getc(fp1))!=EOF)
        {
            putc(c,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        fp2=fopen("filescopy","r");
        printf("\nContents of file 2 are\n");
        while((c=getc(fp2))!=EOF)
        printf("%c",c);
        fclose(fp2);
        return 0;
}

