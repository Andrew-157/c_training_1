#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (true)
    {
        char operator;
        float operand1, operand2;

        printf("Enter + or -. Enter x to exit: ");
        scanf(" %c", &operator);

        printf("Enter 2 numbers: ");
        scanf(" %f %f", &operand1, &operand2);

        char output[] = "Result: %.1f %c %.1f = %.1f\n";
        float result;

        switch (operator)
        {
        case '+':
            result = operand1 + operand2;
            printf(output, operand1, operator, operand2, result);
            break;
        case '-':
            result = operand1 - operand2;
            printf(output, operand1, operator, operand2, result);
            break;
        case 'x':
            printf("Exiting the program...");
            exit(0);
        default:
            printf("ERROR: Invalid operator\n");
        }
    }

    return 0;
}