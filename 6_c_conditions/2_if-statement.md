## if Statement in C

The `if` in C is the most simple decision-making statement. It consists of the test condition and `if block` or body. If the given condition is true only then the `if block` will be executed.

The if in C is a decision-making statement that is used to execute a block of code based on the value of the given expression. It is one of the core concepts of C programming and is used to include conditional code in our program.

```c
if (condition) 
{
    // if body
    // Statements to execute if condition is true
}
```

```c
#include <stdio.h>

int main()
{

    int bfg = 9;

    if (bfg < 10)
    {
        printf("%d is less than 10\n", bfg);
    }

    if (bfg > 20)
    {
        printf("%d is greater than 20\n", bfg);
    }

    return 0;
}
```

Output
```
9 is less than 10
```

## Examples of if Statement in C

1. C Program to check whether the number is even or odd

```c
#include <stdbool.h>
#include <stdio.h>

bool is_even(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int userNumber;
    printf("Enter an integer: ");
    scanf(" %d", &userNumber);

    if (is_even(userNumber))
    {
        printf("%d number you entered is even\n", userNumber);
    }
    else
    {
        printf("%d number you entered is odd\n", userNumber);
    }

    return 0;
}
```

Output
```
Enter an integer: 4956
4956 number you entered is even
```

2. C Program to check whether the number is prime or not

In this program, we will check for the smallest factor of the given number N starting from 2 to sqrt (N) using a loop. Whenever we find the factor, we will set the flag and exit the loop. The code to be executed will be contained inside the if statement.

```c
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
```

Output
```
Enter a number: 19
19 is a prime number.
```

## Advantages of if Statement

- It is the simplest decision-making statement.

- It is easy to use and understand.

- It can evaluate expressions of all types such as int, char, bool, etc.

## Disadvantages of if Statement

- It contains only a single block. In case when there are multiply related if blocks, all the blocks will be tested even when the matching if block is found at the start.

- When there are a large number of expressions, the code of the if block gets complex and unreadable.

- It is slower for a large number of conditions.