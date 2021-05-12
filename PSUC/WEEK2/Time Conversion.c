#include <stdio.h>
int main()
{
    int seconds, hours, minutes, Seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    Seconds=(seconds%3600)%60;
    printf("%d second(s) = %d hour(s) %d minute(s) %d second(s)",seconds,hours,minutes,Seconds);
    return 0;
}
