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

## Examples of if Statements in C

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