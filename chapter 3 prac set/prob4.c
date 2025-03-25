#include <stdio.h>

int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if ((year % 4) == 0 && (year%100 != 0) || year%400 ==0)
    {
        printf("the year was entered by you is leap year");
    }
    else
    {
        printf("the year was entered by you is not leap year");
    }
    return 0;
}