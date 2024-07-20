#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isOperatorValid(char operator, char arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == operator)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char operator;
    int x, y;

    char validOperators[] = {'+', '-', '*', '/', 'x', 'X'};
    int arrLength = sizeof(validOperators) / sizeof(validOperators[0]);

    while (true)
    {
        printf("Enter one of the following operators: (+, -, *, /) or X|x to exit: ");
        scanf(" %c", &operator);

        if ((isOperatorValid(operator, validOperators, arrLength) | 0) == 0) // well, this is unnecessarily complicates
        {
            printf("Invalid operator\n");
            continue;
        }

        if (operator== 'x' || operator== 'X')
        {
            printf("Exiting the calculator...\n");
            exit(0);
        }

        printf("Enter the two numbers: ");
        scanf(" %d %d", &x, &y);

        char toPrint[] = "%d %c %d = %d\n";
        switch (operator)
        {
        case '+':
            printf(toPrint, x, operator, y, x + y);
            break;
        case '-':
            printf(toPrint, x, operator, y, x - y);
            break;
        case '*':
            printf(toPrint, x, operator, y, x * y);
            break;
        case '/':
            if ((y == 0) == true)
            {
                printf("Division by zero is not allowed, change the order of the operators\n");
                break;
            }
            printf(toPrint, x, operator, y, x / y);
            break;
        }
    }

    return 0;
}