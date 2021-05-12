#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],word[100];
    int i,j,f,k,n,wl;
    printf("Enter the sentence: ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    n=i;
    printf("Enter the word to be deleted: ");
    gets(word);
    for(i=0;word[i]!='\0';i++);
    wl=i;
    for(i=0;str[i]!='\0';i++)
    {
        f=1;
        for(j=i,k=0;j<wl+i;j++,k++)
        {
            if(str[j]!=word[k])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            for(k=i+wl;k<n;k++)
                str[k-wl]=str[k];
            break;
        }
        if(f==0)
            continue;
    }
    for(i=0;i<n-wl;i++)
        printf("%c",str[i]);
    return 0;
}
