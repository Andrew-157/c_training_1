// C program to find whether number is prime - method 2 (sqrt(n))
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

/*
In this method, we use a mathematical property which states that:
The smallest and greater than one factor of a number cannot be
more than the square root of that number.
*/

bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {2, 45, 8, 90, 99, 17, 23, 32, 31, 1};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        int currNum = arr[i];
        if (isPrime(currNum))
        {
            printf("%d is prime\n", currNum);
        }
        else
        {
            printf("%d is not prime\n", currNum);
        }
    }

    return 0;
}
