# `break` Statement

The purpose of the break statement in C is for unconditional exit from the loop. The break in C is a loop control statement that breaks out of the loop when encountered. It can be used inside loops or switch statements to bring the control out of the block. The break statement can only break out of a single loop at a time.

## Examples of `break` in C

### Example 1: C Program to use break Statement with Simple Loops

```c
#include <stdio.h>

int main()
{

    printf("break in for loop: ");
    for (int i = 4; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("\n");
            break;
        }
        int j = 10 / i;
        printf("%d ", j);
    }

    int i = 4;
    printf("break in while loop: ");
    while (i >= 0)
    {
        if (i == 0)
        {
            printf("\n");
            break;
        }
        int j = 10 / i--;
        printf("%d ", j);
    }

    i = 4;
    printf("break in do-while loop: ");
    do
    {
        if (i == 0)
        {
            printf("\n");
            break;
        }
        int j = 10 / i--;
        printf("%d ", j);
    } while (i >= 0);

    return 0;
}
```

Output:

```bash
break in for loop: 2 3 5 10
break in while loop: 2 3 5 10
break in do-while loop: 2 3 5 10
```

### Example 2: C Program to use break Statement with Nested Loops

```c
#include <stdbool.h>
#include <stdio.h>
#define LIMIT 6
#define LOWER_LIMIT 4

int main()
{

    for (int i = 1; i <= LIMIT; ++i)
    {
        bool toBreak = false;
        for (int j = 1; j <= i; ++j)
        {
            if (i <= LOWER_LIMIT)
            {
                printf("%d ", j);
            }
            else
            {
                toBreak = true;
                break;
            }
        }
        if (toBreak == true)
        {
            break;
        }
        printf("\n");
    }

    return 0;
}
```

Output

```bash
1
1 2
1 2 3
1 2 3 4
```

**NOTE**: *Break statement only breaks out of one loop at a time. So if in nested loop, we have used break in inner loop, the control will come to outer loop instead of breaking out of all the loops at once. We will have to use multiple break statements if we want to break out of all the loops.*

### Example 3: C Program to use break Statement with Infinite Loops

```c
#include <stdbool.h>
#include <stdio.h>

int main()
{

    int i = 0;

    while (true)
    {
        printf("%d ", i);
        i++;
        if (i == 11)
        {
            printf("\n");
            break;
        }
    }

    return 0;
}
```

Output

```bash
0 1 2 3 4 5 6 7 8 9 10
```

## How `break` Statement Works

- Step1: The loop execution starts after the test condition is evaluated.
- Step2: If the break condition is present the condition will be evaluated.
- Step3A: If the condition is true, the program control reaches the break statement and skips the further execution of the loop by jumping to the statements directly below the loop.
- Step3B: If the condition is false, the normal flow of the program control continues.

## `break` in Switch Case

In general, the Switch case statement evaluates an expression, and depending on the value of the expression, it executes the statement associated with the value. Not only that, all the cases after the matching case will also be executed. To prevent that, we can use the break statement in the switch case as shown:

```c
switch(expression)
{    
case value1:
    statement_1;
    break;
    
case value2:
    statement_2;
    break;
.....
.....

case value_n:
    statement_n;
    break;
    
default:
    default statement;
}
```

```c
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
```

Output

```bash
Enter + or -. Enter x to exit: +
Enter 2 numbers: 1 2
Result: 1.0 + 2.0 = 3.0
Enter + or -. Enter x to exit: -
Enter 2 numbers: 4 3
Result: 4.0 - 3.0 = 1.0
Enter + or -. Enter x to exit: {
Enter 2 numbers: 99 88
ERROR: Invalid operator
Enter + or -. Enter x to exit: x
Enter 2 numbers: 0 0
Exiting the program...
```
