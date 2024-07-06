## Decision Making in C (if, if...else, Nested if, if-else-if)

The **conditional statements** (also known as decision control structures) such as if, if else, switch, etc. are used for decision-making purposes in C programs.

They are also known as **Decision-Making Statements** and are used to evaluate one or more conditions and make the decision whether to execute a set of statements or not. These decision-making statements in programming languages decide the direction of the flow of program execution.

## Types of Conditional Statements in C

![Types of Conditional Statements in C](./images/Conditional-Statements-in-c.webp "a title")

Following are the decision-making statements available in C:

- if Statement
- if-else Statement
- Nested if Statement
- if-else-if Ladder
- switch Statement
- Conditional Operator(Ternary Operator)
- Jump Statements:
    - break
    - continue
    - goto
    - return

## if Statement

The if statement is the most simple decision-making statement. It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statements is executed otherwise not. 

```c
if (condition) {
    // Statements to execute if
    // condition is true
}
```

Here, the condition after evaluation will be either true or false. C if statement accepts boolean values – if the value is true then it will execute the block of statements below it otherwise not. If we do not provide the curly braces `{` and `}` after if(condition) then by default if statement will consider the first immediately below statement to be inside its block.

```c
#include <stdio.h>

int main()
{

    int i = 10;

    if (i > 15)
    {
        printf("10 is greater than 15");
    }

    printf("I am Not in if");

    return 0;
}
```

Output
```
I am Not in if
```

## if-else Statement

The if statement alone tells us that if a condition is true it will execute a block of statements and if the condition is false it won’t. But what if we want to do something else when the condition is false? Here comes the C else statement. We can use the else statement with the if statement to execute a block of code when the condition is false. The if-else statement consists of two blocks, one for false expression and one for true expression.

```c
if (condition) {
    // Executes this block if
    // condition is true
}
else {
    // Executes this block if
    // condition is false
}
```

```c
#include <stdio.h>

int main()
{

    int i = 20;

    if (i < 15)
    {
        printf("i is smaller than 15");
    }
    else
    {
        printf("i is greater than 15");
    }

    return 0;
}
```

Output
```
i is greater than 15
```

## Nested if-else Statement

A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an if statement inside another if statement.

```c
if (condition1) {
    // Executes when condition1 is true
    if (condition2) {
        // Executes when condition2 is true
    }
    else {
        // Executes when condition2 is false
    }
}
```

```c
#include <stdio.h>

int is_even(int number)
{
    if ((number & 1) == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int i = 10;

    if (is_even(i))
    {
        if (i > 5)
        {
            printf("i is greater than 5");
        }
        else
        {
            printf("i is less than 5");
        }
    }
}
```

Output
```
i is greater than 5
```

## if-else-if Ladder Statement

The if else if statements are used when the user has to decide among multiple options. The C if statements are executed from the top down. As soon as one of the conditions controlling the if is true, the statement associated with that if is executed, and the rest of the C else-if ladder is bypassed. If none of the conditions is true, then the final else statement will be executed. if-else-if ladder is similar to the switch statement.

```c
if (condition) {
    statement;
}
else if (condition) {
    statement;
}
...
else {
    statement;
}
```

```c
#include <stdio.h>

int main()
{
    int i = 20;

    if (i == 10)
    {
        printf("i is 10");
    }
    else if (i == 15)
    {
        printf("i is 15");
    }
    else if (i == 20)
    {
        printf("i is 20");
    }
    else
    {
        printf("I don't know what i is");
    }

    return 0;
}
```

Output
```
i is 20
```

## switch Statement

The switch case statement is an alternative to the if else if ladder that can be used to execute the conditional code based on the value of the variable specified in the switch statement. The switch block consists of cases to be executed based on the value of the switch variable.

```c
switch (expression) {
    case value1:
        statements;
    case value2:
        statements;
    ....
    ....
    ....
    default:
        statements;
}
```

**NOTE:** *The switch expression should evaluate to either integer or character. It cannot evaluate any other data type.*

```c
#include <stdio.h>

int main()
{

    int var = 2;

    switch (var)
    {
    case 1:
        printf("Case 1 is executed");
        break;
    case 2:
        printf("Case 2 is executed");
        break;
    default:
        printf("Default case is executed");
        break;
    }

    return 0;
}
```

Output
```
Case 2 is executed
```

## Conditional Operator

The conditional operator is used to add conditional code in our program. It is similar to the if-else statement. It is also known as the ternary operator as it works on three operands.

```c
(condition) ? true_statements : false_statements;
```

```c
#include <stdio.h>

int main()
{

    int var, flag = 0;

    var = (flag == 0) ? 25 : -25;
    printf("Value of var when flag is 0: %d\n", var);

    flag = -1;
    var = (flag == 0) ? 25 : -25;
    printf("Value of var when flag is NOT 0: %d\n", var);

    return 0;
}
```

Output
```
Value of var when flag is 0: 25
Value of var when flag is NOT 0: -25
```

## Jump Statements

These statements are used in C for the unconditional flow of control throughout the functions in a program. They support four types of jump statements:

## `break`

This loop control statement is used to terminate the loop. As soon as the break statement is encountered from within a loop, the loop iterations stop there, and control returns from the loop immediately to the first statement after the loop.

```c
#include <stdio.h>

void findElement(int arr[], int arrLength, int key)
{
    for (int i = 0; i < arrLength; i++)
    {
        int currElement = arr[i];
        if (currElement == key)
        {
            printf("%d element was found at index %d\n", key, i);
            break;
        }
    }
}

int main()
{

    int arr[] = {23, 44, 1, 0, 87, -77, 5, -109, 55};
    int key = -77;
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    findElement(arr, arrLength, key);

    return 0;
}
```

Output
```
-77 element was found at index 5
```

## `continue`

This loop control statement is just like the break statement. The continue statement is opposite to that of the break statement, instead of terminating the loop, it forces to execute the next iteration of the loop. As the name suggests the continue statement forces the loop to continue or execute the next iteration. When the continue statement is executed in the loop, the code inside the loop following the continue statement will be skipped and the next iteration of the loop will begin.

```c
#include <stdio.h>

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
```

Output
```
0 1 2 3 4 5 7 8 9 10
```

## `goto`

The goto statement in C also referred to as the unconditional jump statement can be used to jump from one point to another within a function. 

```
Syntax1      |   Syntax2
----------------------------
goto label;  |    label:  
.            |    .
.            |    .
.            |    .
label:       |    goto label;
```

In the above syntax, the first line tells the compiler to go to or jump to the statement marked as a label. Here, a label is a user-defined identifier that indicates the target statement. The statement immediately followed after `label:` is the destination statement. The `label:` can also appear before the `goto label;` statement in the above syntax. 

```c
#include <stdio.h>

int main()
{

    int i = 1;
label:
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        goto label;
    }

    return 0;
}
```

Output
```c
1 2 3 4 5 6 7 8 9 10
```

## `return`

The `return` in C returns the flow of the execution to the function from where it is called. This statement does not mandatorily need any conditional statements. As soon as the statement is executed, the flow of the program stops immediately and returns the control from where it was called. The return statement may or may not return anything for a void function, but for a non-void function, a return value must be returned.

```c
#include <stdio.h>

int sumOf(int a, int b)
{
    return a + b;
}

void printSum(int sum)
{
    printf("The sum is %d\n", sum);
    return;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = sumOf(num1, num2);
    printSum(sum);
    return 0;
}
```

Output
```
The sum is 30
```