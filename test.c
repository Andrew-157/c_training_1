#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);

    int flag = 0;

    // loop to check if the number is not prime
    // rather than if it is prime
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    printf("%d is ", num);
    if (flag || num == 1) // Would be better to check it higher in the code to avoid loop
    {
        printf("not ");
    }
    printf("a prime number.\n");

    return 0;
}