## C Logical Operators

Logical operators in C are used to combine multiple conditions/constraints. Logical Operators return either 0 or 1, it depends on whether the expression result is true or false. In C programming for decision-making, we use logical operators.

There are 3 logical operators in C:

- Logical AND `&&`

- Logical OR `||`

- Logical NOT `!`

## 1. Logical AND Operator (`&&`)

If both operands are non zero then the condition becomes true. Otherwise, the result has a value of 0. The return type of the result is int.

```c
(operand_1 && operand_2)
```

```c
#include <stdio.h>

int main()
{

    int a = 10, b = 20;

    if (a > 0 && b > 0)
    {
        printf("a and b are larger than 0\n");
    }
    else
    {
        printf("a and b are less than 0\n");
    }

    return 0;
}
```

Output
```bash
a and b are larger than 0
```

## 2. Logical OR Operator (`||`)

The condition becomes true if any of the operands is non-zero. It returns false if both operands are zero.

```c
(operand_1 || operand_2)
```

```c
#include <stdio.h>

int main()
{

    int a = -1, b = 20;

    if (a > 0 || b > 0)
    {
        printf("Either one or both of the values are greater than zero");
    }
    else
    {
        printf("None of the values is greater than zero");
    }

    return 0;
}
```

Output
```bash
Either one or both of the values are greater than zero
```

## 3. Logical NOT Operator (`!`)

If the condition is true then the logical NOT operator will make it false and vice-versa.

```c
!(operand_1 && operand_2)
```

```c
// C program for Logical
// NOT Operator
#include <stdio.h>

// Driver code
int main()
{
    int a = 10, b = 20;

    if (!(a < 0 && b < 0))
    {
        // condition returned true but
        // logical NOT operator changed
        // it to false
        printf("Both values are greater than 0\n");
    }
    else
    {
        printf("Both values are less than 0\n");
    }
    return 0;
}
```

Output
```
Both values are greater than 0
```

## Short Circuit Logical Operators

When the result can be determined by evaluating the preceding Logical expression without evaluating the further operands, it is known as short-circuiting.

Short-circuiting can be seen in the equation having more than one Logical operator.

### 1. Short Circuiting in Logical AND Operator

The logical AND operator returns true if and only if all operands evaluate to true. If the first operand is false, then the further operands will not be evaluated. This is because even if the further operands evaluate to true, the entire condition will still return false.

```c
#include <stdio.h>
#include <stdbool.h>

bool is_positive(int number)
{
    // utility function to check if the integer is positive
    if (number >= 0)
    {
        return true;
    }
    return false;
}

bool is_even(int number)
{
    // utility function to check if the integer is even
    if ((number & 1) > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int x = 10;
    char success_message[] = "Both conditions are satisfied\n";
    char failure_message[] = "Conditions are not satisfied\n";

    // Both conditions are evaluated
    if (is_positive(x) && is_even(x))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    int y = -5;

    // First condition is evaluated and found to be false,
    // so the second condition is not evaluated
    if (is_positive(y) && is_even(y))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    return 0;
}
```

Output
```
Both conditions are satisfied
Conditions are not satisfied
```

### 2. Short Circuiting in Logical OR Operator

OR operator returns true if at least one operand evaluates to true. If the first operand is true, then the further operands will not be evaluated. This is because even if the further operands evaluate to false, the entire condition will still return true.

```c
#include <stdio.h>
#include <stdbool.h>

// utility function to check if the integer is positive
bool is_positive(int number)
{
    if (number >= 0)
    {
        return true;
    }
    return false;
}

// utility function to check if the integer is even
bool is_even(int number)
{
    if ((number & 1) > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int x = 8;

    char success_message[] = "At least one condition is true\n";
    char failure_message[] = "Conditions are not satisfied\n";

    // The first condition is evaluated and found to be true,
    // so the second condition is not evaluated
    if (is_positive(x) || is_even(x))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    signed int y = -5;

    // The first condition is evaluated and found to be false,
    // so the second condition is evaluated
    if (is_positive(y) || is_even(y))
    {
        printf("%s", success_message);
    }
    else
    {
        printf("%s", failure_message);
    }

    return 0;
}
```

Output
```
At least one condition is true
Conditions are not satisfied
```