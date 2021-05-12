#include<stdio.h>
#include<string.h>
int IsPalin(char str[100],int ln)
{
int i,f;
f=1;
for(i=0;i<=ln/2;i++)
 {
   if(str[i]!=str[ln-1-i])
   {
       f=0;
       break;
   }
  }
  if(f==1)
     return 1;
  else
     return 0;
}
int main()
{
char str[100];
int ln;
printf("Enter the word: ");
gets(str);
ln=strlen(str);
 if(IsPalin(str,ln)==1)
     printf("String is a palindrome");
 else
     printf("String is not a palindrome");
return 0;
}
