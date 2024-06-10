## Unary Operators in C

Unary operators are the operators that perform operations on a single operand to produce a new value.

## Types of Unary Operators

1. Unary minus - `-`

2. Increment - `++`

3. Decrement - `--`

4. NOT - `!`

5. Addressof - `&`

6. Size Of - `sizeof()`

## Unary Minus

The minus operator ( – ) changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive.

```c
 int a = 10;
 int b = -a;  // b = -10
```

Unary minus is different from the subtraction operator, as subtraction requires two operands.

```c
#include <stdio.h>

int main()
{
    int positiveInteger = 100;
    int negativeInteger = -positiveInteger;

    printf("Positive Integer: %d\n", positiveInteger);
    printf("Negative Integer: %d", negativeInteger);

    return 0;
}
```

Output
```bash
Positive Integer: 100
Negative Integer: -100
```

## Increment

The increment operator `++` is used to increment the value of the variable by 1. The increment can be done in two ways:

- ### prefix increment

In this method, the operator precedes the operand (e.g., ++a). The value of the operand will be altered before it is used.

```c
int a = 1;
int b = ++b; // b = 2
```

- ### postfix increment

In this method, the operator follows the operand (e.g., a++). The value of the operand will be altered after it is used.

```c
int a = 1;
int b = a++;   // b = 1
int c = a;     // c = 2
```

```c
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 5;
    printf("Pre-Incrementing a = %d\n", ++a);      // 6
    printf("Post-Incrementing b = %d\n", b++);     // 5
    printf("Post-Incrementing final b = %d\n", b); // 6
    return 0;
}
```

Output
```bash
Pre-Incrementing a = 6
Post-Incrementing b = 5
Post-Incrementing final b = 6
```