#include <stdio.h>
#include <stdlib.h>
struct student{
char name[20];
int rollno;
int m1;int m2;int m3;
int avg;
};
int main()
{
    struct student s[10],temp;
    int i,j,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter their name,rollno,marks in m1,m2,m3: \n");
    for(i=0;i<n;i++)
        scanf("%s%d%d%d%d",s[i].name,&s[i].rollno,&s[i].m1,&s[i].m2,&s[i].m3);
    for(i=0;i<n;i++)
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    for(i=0;i<n;i++)
        for(j=1;j<n-i-1;j++)
        if(s[i].avg>s[j].avg)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("Names of students in ascending order their average marks is: \n");
    for(i=0;i<n;i++)
        printf("%s\t",s[i].name);
    return 0;
}
