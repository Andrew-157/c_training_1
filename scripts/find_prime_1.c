// C program to find whether number is prime - method 1 (Simple Method)
#include <stdbool.h>
#include <stdio.h>

/*In this method, we will check if any number between 2 to (N/2) can divide N completely.
If such a number exists, it means that the number N is not a prime number as it is divisible
by a number other than 1 and itself.*/

/* We take (N/2) as the upper limit because there are no numbers between (N/2) and N that
can divide N completely. If the number is not prime, then N/2 is the largest number that will
divide N without a remainder, apart from N, of course.
*/

bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }

    for (int i = 2; i <= number / 2; i++)
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