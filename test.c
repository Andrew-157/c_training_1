#include <stdbool.h>
#include <stdio.h>

void is_leap(int year)
{
    (year % 4 == 0) ? (year % 100 != 0 ? printf("%d is a leap year\n", year)
                                       : (year % 400 == 0 ? printf("%d is a leap year\n", year)
                                                          : printf("%d is not a leap year\n", year)))
                    : printf("%d is not a leap year\n", year);
}

int main()
{
    int year;

    while (true)
    {
        printf("Enter a year: ");
        scanf(" %d", &year);
        is_leap(year);
    }

    return 0;
}