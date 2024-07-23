# `continue` Statement in C

The continue statement in C is a jump statement that is used to bring the program control to the start of the loop. As a result, the current iteration of the loop gets skipped and the control moves on to the next iteration. Statements after the continue statement in the loop are not executed. We can use the continue statement in the while loop, for loop, or do..while loop to alter the normal flow of the program execution. Unlike break, it cannot be used with a C switch case.

## Examples of `continue` in C

Example 1: C Program to use continue statement in a single loop.

```c
#include <stdio.h>

int main()
{

    for (int i = 0; i <= 8; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");

    int i = 0;

    while (i <= 8)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        printf("%d ", i++);
    };

    printf("\n");

    i = 0;

    do
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        printf("%d ", i++);
    } while (i <= 8);

    return 0;
}
```

Output

```bash
0 1 2 3 5 6 7 8
0 1 2 3 5 6 7 8
0 1 2 3 5 6 7 8
```

Example 2: C program to use continue in a nested loop

```c
#include <stdio.h>

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (j == 3)
            {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
```

Output

```bash
0 1 2 4
0 1 2 4
0 1 2 4
```

## How `continue` works

- Step1: The loop's execution starts after the loop condition is evaluated to be true.
- Step2: The condition of the continue statement will be evaluated.
- Step3A: If the condition is false, the normal execution will continue.
- Step 3B: If the condition is true, the program control will jump to the start of the loop and all the statements below the continue will be skipped.
- Step 4: Steps 1 to 4 will be repeated till the end of the loop.

## C `break` and `continue` Statement Differences

**break statement**: By using break statement, we terminate the smallest enclosing loop (e.g, a while, do-while, for, or switch statement).

**continue statement**: By using the continue statement, the loop statement is skipped and the next iteration takes place instead of the one prior.

Example: C Program to demonstrate the difference between the working of break and continue statement in C.

```c
#include <stdio.h>

int main()
{

    printf("The loop with break produces the following output:\n");
    for (int i = 1; i <= 7; i++)
    {
        if (i % 3 == 0)
        {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");

    printf("The loop with continue produces the following output:\n");

    for (int i = 1; i <= 7; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
```

Output

```bash
The loop with break produces the following output:
1 2
The loop with continue produces the following output:
1 2 4 5 7
```
