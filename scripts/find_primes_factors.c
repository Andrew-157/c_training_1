// C program to find prime factors of a number - naive approach
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number: ");
    scanf(" %d", &number);

    for (int i = 2; i < sqrt(number); i++)
    {
        if ((number % i == 0) && (isPrime(i)))
        {
            printf("%d ", i);
        }
    }

    if (isPrime(number))
    {
        printf("%d\n", number);
    }

    return 0;
}
