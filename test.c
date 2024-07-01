#include <stdio.h>
#include <stdbool.h>

// utility function to check if the integer is positive
bool is_positive(int number)
{
    if (number >= 0)
    {
        return true;
    }
    return false;
}

// utility function to check if the integer is even
bool is_even(int number)
{
    if ((number & 1) > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int x = 8;

    char success_message[] = "At least one condition is true\n";
    char failure_message[] = "Conditions are not satisfied\n";

    // The first condition is evaluated and found to be true,
    // so the second condition is not evaluated
    if (is_positive(x) || is_even(x))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    signed int y = -5;

    // The first condition is evaluated and found to be false,
    // so the second condition is evaluated
    if (is_positive(y) || is_even(y))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    return 0;
}