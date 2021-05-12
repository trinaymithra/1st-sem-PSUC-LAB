#include <stdio.h>
#include <stdlib.h>
struct employee{
int empno;
char name[15];
int age;
int joining_year;
long int salary;
int retirement_year;
};
int main()
{
    struct employee e[10];
    int i,j,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    printf("Enter empno, name, age, joining year, salary: \n");
    for(i=0;i<n;i++)
        scanf("%d%s%d%d%ld",&e[i].empno,e[i].name,&e[i].age,&e[i].joining_year,&e[i].salary);
    for(i=0;i<n;i++)
    e[i].retirement_year=2018+55-e[i].age;
    for(i=0;i<n;i++)
      for(j=e[i].age;j<55;j++)
            e[i].salary=e[i].salary+((e[i].salary*20)/100);
    for(i=0;i<n;i++)
        printf("%s\t%d\t%ld\n",e[i].name,e[i].retirement_year,e[i].salary);
    return 0;
}
