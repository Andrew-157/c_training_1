## Switch Statement in C

Switch case statement evaluates a given expression and based on the evaluated value(matching a certain condition), it executes the statements associated with it. Basically, it is used to perform different actions based on different conditions(cases). 

- Switch case statements follow a selection-control mechanism and allow a value to change control of execution.

- They are a substitute for long if statements that compare a variable to several integral values.

- The switch statement is a multiway branch statement. It provides an easy way to dispatch execution to different parts of code based on the value of the expression.

In C, the switch case statement is used for executing one condition from multiple conditions. It is similar to an if-else-if ladder.

The switch statement consists of conditional-based cases and a default case.

```c
switch(expression)
{
    case value1: 
        statement_1;
        break;
    case value2: 
        statement_2;
        break;
    .
    .
    .
    case value_n: 
        statement_n;
        break;
    default: 
        default_statement;
}
```

Rules of the switch case statement:

1. In a switch statement, the "case value" must be of `char` or `int` type.

2. There can be one or N number of cases.

3. The values in the case must be unique.

4. Each statement of the case can have a break statement. It is optional.

5. The default Statement is also optional.

```c
#include <stdio.h>

int main()
{

    int var = 1;

    switch (var)
    {
    case 1:
        printf("var is 1\n");
        break;
    case 2:
        printf("var is 2\n");
        break;
    case 3:
        printf("var is 3\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
```

Output:

```bash
var is 1
```

The working of the switch statement in c is as follows:

- Step 1: The switch variable is evaluated.

- Step 2: The evaluated value is matched against all the present cases.

- Step 3A: If the matching case value is found, the associated code is executed.

- Step 3B: If the matching code is not found, then the default case is executed if present.

- Step 4A: If the break keyword is present in the case, then program control breaks out of the switch statement.

- Step 4B: If the break keyword is not present, then all the cases after the matching case are executed.

- Step 5: Statements after the switch statement are executed.

## `break` in Switch Case

This keyword is used to stop the execution inside a switch block. It helps to terminate the switch block and break out of it. When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement.

The break statement is optional. If omitted, execution will continue on into the next case. The flow of control will fall through to subsequent cases until a break is reached.

Example of switch case without break:

```c
#include <stdio.h>

int main()
{

    int val = 2;

    switch (val)
    {
    case 1:
        printf("Case 1\n");
    case 2:
        printf("Case 2\n");
    case 3:
        printf("Case 3\n");
    case 4:
        printf("Case 4\n");
    default:
        printf("Default Case");
    }

    return 0;
}
```

Output:

```bash
Case 2
Case 3
Case 4
Default Case
```

## `default` in switch case

The default keyword is used to specify the set of statements to execute if there is no case match. 

It is optional to use the default keyword in a switch case. Even if the switch case statement does not have a default statement, it would run without any problem.

## Important Points about Switch Case Statements

1. Switch expression should result in a constant value

If the expression provided in the switch statement does not result in a constant value, it would not be valid. Some valid expressions for switch case will be:

```c
// Constant expressions allowed
switch(1+2+23)
switch(1*2+3%4)
// Variable expression are allowed provided
// they are assigned with fixed values
switch(a*b+c*d)
switch(a+b+c)
```

2. Expression value should be only of int or char type.

The switch statement can only evaluate the integer or character value. So the switch expression should return the values of type int or char only.

```c
#include <stdio.h>

int main()
{

    float a = 1.2;

    switch (a)
    {

    case 1.2:
        printf("1.2\n");
        break;
    }

    return 0;
}
```

```bash
[admin@localhost ~] gcc -Wall test.c
.\test.c: In function 'main':
.\test.c:8:13: error: switch quantity not an integer
     switch (a)
             ^
.\test.c:11:5: error: case label does not reduce to an integer constant
     case 1.2:
     ^~~~
```

3. Case Values must be unique

In the C switch statement, duplicate case values are not allowed.

```c
#include <stdio.h>

int main()
{

    switch (1)
    {
    case 1:
        printf("Case 1\n");
        break;
    case 1:
        printf("Case 1\n");
        break;
    }

    return 0;
}
```

```bash
[admin@localhost ~] gcc -Wall test.c
.\test.c: In function 'main':
.\test.c:11:5: error: duplicate case value
     case 1:
     ^~~~
.\test.c:8:5: error: previously used here
     case 1:
     ^~~~
```

4. Nesting of Switch Statements

Nesting of switch statements is allowed, which means you can have switch statements inside another switch. However nested switch statements should be avoided as it makes the program more complex and less readable.

```c
#include <stdio.h>

int main()
{

    int var = 1;

    switch (var)
    {
    case 1:
        printf("Case 1 Matched.\n");
        switch (++var)
        {
        case 2:
            printf("Nested Case 1 Matched.\n");
        }
    }

    return 0;
}
```

```bash
[admin@localhost ~] gcc -Wall test.c
Case 1 Matched.
Nested Case 1 Matched.
```

4. The default block can be placed anywhere

Regardless of its placement, the default case only gets executed if none of the other case conditions are met. So, putting it at the beginning, middle, or end doesn’t change the core logic.

```c
#include <stdio.h>

void funSwitch(int var)
{

    printf("When var is %d\n", var);

    switch (var)
    {
    default:
        printf("Default\n");
    case 1:
        printf("Case 1\n");
    case 3:
        printf("Case 3\n");
        break;
    case 2:
        printf("Case 2\n");
    }
    printf("\n");
}

int main()
{

    int numS[] = {1, 5, 2};
    int lengtH = sizeof(numS) / sizeof(numS[1]);

    for (int i = 0; i < lengtH; i++)
    {
        funSwitch(numS[i]);
    }

    return 0;
}
```

```bash
[admin@localhost ~] ./a.out
When var is 1
Case 1
Case 3

When var is 5
Default
Case 1
Case 3

When var is 2
Case 2

```

## Examples of switch Statement in C

Example 1: C Program to print the day of the week using a switch case.

```c
#include <stdio.h>

int main()
{

    int day = 1;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("This day does not exist\n");
    }

    return 0;
}
```

```bash
Monday
```

Example 2: Simple Calculator using switch case in C

```c
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
```

```bash
[admin@localhost ~] ./a.out
Enter one of the following operators: (+, -, *, /) or X|x to exit: |
Invalid operator
Enter one of the following operators: (+, -, *, /) or X|x to exit: *
Enter the two numbers: 8 9
8 * 9 = 72
Enter one of the following operators: (+, -, *, /) or X|x to exit: /
Enter the two numbers: 2 0
Division by zero is not allowed, change the order of the operators
Enter one of the following operators: (+, -, *, /) or X|x to exit: /
Enter the two numbers: 0 2
0 / 2 = 0
Enter one of the following operators: (+, -, *, /) or X|x to exit: X
Exiting the calculator...
```

## Advantages of C `switch` Statement

1. Easier to read than if else if. (debatable)
2. Easier to debug and maintain for a large number of conditions.
3. Faster execution speed.

## Disadvantages of C `switch` Statement

1. Switch case can only evaluate int or char type.
2. No support for logical expressions.
3. Have to keep in mind to add a break in every case.

Switch Statement is mostly preferred when the number of conditions to evaluate is large.
