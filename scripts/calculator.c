#include <stdio.h>
#include <stdbool.h>

char OPERATORS[] = {'+', '-', '*', '/'};

bool is_valid_operator(char operator)
{
    int length = sizeof(OPERATORS) / sizeof(OPERATORS[0]);
    for (int i = 0; i < length; i++)
    {
        if (operator== OPERATORS[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int operand1, operand2;
    char operator;

    while (true)
    {

        printf("Enter first operand: ");
        scanf(" %d", &operand1);

        printf("Enter Operator: ");
        scanf(" %c", &operator);
        while (!(is_valid_operator(operator)))
        {
            printf("ERROR. %c is not a valid operator. Valid choices are: {\"+\", \"-\", \"*\", \"/\"}}\n", operator);
            printf("Enter operator again: ");
            scanf(" %c", &operator);
        }

        printf("Enter second operand: ");
        scanf(" %d", &operand2);

        int result;
        if (operator== '+')
        {
            result = operand1 + operand2;
        }
        else if (operator== '-')
        {
            result = operand1 - operand2;
        }
        else if (operator== '*')
        {
            result = operand1 * operand2;
        }
        else
        {
            result = operand1 / operand2;
        }

        printf("The result of %d %c %d is %d\n", operand1, operator, operand2, result);
    }

    return 0;
}