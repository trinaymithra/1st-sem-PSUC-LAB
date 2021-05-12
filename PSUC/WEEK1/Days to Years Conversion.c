#include <stdio.h>
int main()
{
    int totaldays,years,weeks,days;
    printf("Enter the number of days: ");
    scanf("%d", &totaldays);
    years=totaldays/365;
    weeks=(totaldays%365)/7;
    days=(totaldays%365)%7;
    printf("%d days = %d year(s),%d week(s),%d day(s)",totaldays,years,weeks,days);
    return 0;
}
