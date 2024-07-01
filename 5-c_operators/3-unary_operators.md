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
```
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
```
Pre-Incrementing a = 6
Post-Incrementing b = 5
Post-Incrementing final b = 6
```

## Decrement

The decrement operator `--` is used to decrement the value of the variable by 1. The decrement can be done in two ways:

- ### prefix decrement

In this method, the operator precedes the operand (e.g., – -a). The value of the operand will be altered before it is used.

```c
int a = 1;
int b = --a; // 0
```

- ### postfix decrement

In this method, the operator follows the operand (e.g., a- -). The value of the operand will be altered after it is used.

```c
int a = 1;
int b = a--; // b = 1
int c = a;   // c = 0
```
Example
```c
#include <stdio.h>

int main()
{

    int a = 5;
    int b = 5;

    printf("Pre-Decrementing: %d\n", --a);  // 4
    printf("Post-Decrementing: %d\n", b--); // 5
    printf("Final b value: %d", b);         // 4

    return 0;
}
```

Output
```
Pre-Decrementing: 4
Post-Decrementing: 5
Final b value: 4
```

## NOT `&`

The logical NOT operator `!` is used to reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    int c = a > b;

    if (!c) // !(a > b) is the same
        printf("b is greater than a");
    else
        printf("a is greater than b");

    return 0;
}
```

Output
```
a is greater than b
```

## Addressof operator `&`

The addressof operator `&` gives an address of a variable. It is used to return the memory address of a variable. These addresses returned by the address-of operator are known as pointers because they "point" to the variable in memory.

```c
#include <stdio.h>

int main()
{
    int a = 10;
    printf("Address of a is: %p\n", &a);

    return 0;
}
```

Output
```
Address of a is: 0061FF1C
```

## sizeof()

This operator returns the size of its operand, in bytes. The sizeof() operator always precedes its operand. The operand is an expression, or it may be a cast.

**Note**: *The `sizeof()` operator in C++ is machine dependent. For example, the size of an ‘int’ in C++ may be 4 bytes in a 32-bit machine but it may be 8 bytes in a 64-bit machine.*

```c
#include <stdio.h>

int main()
{
    printf("Size of double: %d\n", sizeof(double));
    printf("Size of int: %d\n", sizeof(int));

    return 0;
}
```

Output
```
Size of double: 8
Size of int: 4
```