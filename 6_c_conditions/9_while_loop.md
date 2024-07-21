# while loop in C

The while Loop is an entry-controlled loop in C programming language. This loop can be used to iterate a part of code while the given condition remains true.

## Syntax

```c
while (test expression)
{
   // body consisting of multiple statements
}
```

```c
#include <stdio.h>

int main()
{

    int i = 0;

    while (i < 5)
    {
        printf("%d. Hello World\n", i);
        i++;
    }

    return 0;
}
```

Output

```bash
0. Hello World
1. Hello World
2. Hello World
3. Hello World
4. Hello World
```

## while Loop Structure

1. **Initialization**: In this step, we initialize the loop variable to some initial value. Initialization is not part of while loop syntax but it is essential when we are using some variable in the test expression

2. **Conditional Statement**: This is one of the most crucial steps as it decides whether the block in the while loop code will execute. The while loop body will be executed if and only if the test condition defined in the conditional statement is true.

3. **Body**: It is the actual set of statements that will be executed till the specified condition is true. It is generally enclosed inside `{ }` braces.

4. **Updation**: It is an expression that updates the value of the loop variable in each iteration. It is also not part of the syntax but we have to define it explicitly in the body of the loop.

## Working of while loop

- Step 1: When the program first comes to the loop, the test condition will be evaluated.

- Step 2A: If the test condition is false, the body of the loop will be skipped, program will continue.

- Step 2B: If the expression evaluates to true, the body of the loop will be executed.

- Step 3: After executing the body, the program control will go to **Step 1**. This process will continue till the test expression is true.

## Infinite while loop

An infinite while loop is created when the given condition is always true. It is encountered by programmers in when:

- The test condition is incorrect.

- Updation statement not present.

```c
#include <stdbool.h>
#include <stdio.h>

int main()
{

    while (true)
    {
        printf("Hello World till the end of times\n");
    }

    return 0;
}
```

Output

```bash
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
Hello World till the end of times
...
```

## Important Points

- It is an entry-controlled loop.

- It runs the block of statements till the conditions are satiated, once the conditions are not satisfied it will terminate.

- Its workflow is *firstly it checks the condition and then executes the body. Hence, a type of pre-tested loop*

- This loop is generally preferred over for loop when the number of iterations is unknown
