## Arithmetic Operators in C

Arithmetic Operators are the type of operators in C that are used to perform mathematical operations in a C program. They can be used in programs to define expressions and mathematical formulas.

The C arithmetic operators are the symbols that are used to perform mathematical operations on operands. There are a total of 9 arithmetic operators in C to provide the basic arithmetic operations such as addition, subtraction, multiplication, etc.

## Types of Arithmetic Operators in C

The C Arithmetic Operators are of two types based on the number of operands they work on. These are as follows:

1. Binary Arithmetic Operators

2. Unary Arithmetic Operators

## 1. Binary Arithmetic Operators in C

The C binary arithmetic operators operate or work on two operands. C provides 5 Binary Arithmetic Operators for performing arithmetic functions which are as follows:

- `+` (Addition) - Add two operands - `x + y`

- `-` (Subtraction) - Subtracts the second operand from the first operand - `x - y`

- `*` (Multiplication) - Multiply two operands - `x * y`

- `/` (Division) - Divide the first operand by the second operand - `x / y`

- `%` (Modulus) - Calculate the remainder when the first operand is divided by the second operand - `x % y`

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 4, res;

    printf("a is %d , b is %d\n", a, b);

    res = a + b;
    printf("a + b is %d\n", res);

    res = a - b;
    printf("a - b is %d\n", res);

    res = a * b;
    printf("a * b is %d\n", res);

    res = a / b;
    printf("a / b is %d\n", res);

    res = a % b;
    printf("a %% b is %d\n", res);

    return 0;
}
```

Output
```bash
a is 10 , b is 4
a + b is 14
a - b is 6
a * b is 40
a / b is 2
a % b is 2
```

## 2. Unary Arithmetic Operators in C

The unary arithmetic operators operate or work with a single operand. In C, we have two unary arithmetic operators which are as follows:

- `--` (Decrement) - Decreases the integer value of the variable by one - `--h` or `h--`

- `++` (Increment) - Increases the integer value of the variable by one - `++h` or `h++`

- `+` (Unary Plus) - Returns the value of its operand - `+h`

- `-` (Unary Minus) - Returns the opposite value of its operand - `-h`

### Increment Operator

The `++` operator is used to increment the value of an integer. In can be used in two ways:

1. Pre-Increment

When placed before the variable name (also called the pre-increment operator), its value is incremented instantly. Consider the example:

```c
a = ++x;
```

The example can be expanded to:
```c
a = (x = x + 1);
```

2. Post Increment

When it is placed after the variable name (also called post-increment operator), its value is preserved temporarily until the execution of this statement and it gets updated before the execution of the next statement. For example:

```c
a = x++;
```

It can be expanded to
```c
a = x;
x = x + 1;
```

### Decrement Operator

The `--` operator is used to decrement the value of an integer. Just like the increment operator, the decrement operator can also be used in two ways:

1. Pre-Decrement

When placed before the variable name (also called the pre-decrement operator), its value is decremented instantly. For example, `––x`.

2. Post Decrement

When it is placed after the variable name (also called post-decrement operator), its value is preserved temporarily until the execution of this statement and it gets updated before the execution of the next statement. For example, `x--`.

```c
#include <stdio.h>

int main()
{

    int a = 10, res;

    printf("Post Increment and Decrement\n");
    // post-increment example:
    // res is assigned 10 only, a is not updated yet
    res = a++;
    printf("a is %d and result is %d\n", a, res); // a becomes 11 now, res is 10

    // post decrement example:
    // res is assigned 11 only, a is not updated yet
    res = a--;
    printf("a is %d and result is %d\n", a, res); // a becomes 10, res is 11

    printf("\nPre Increment and Decrement\n");
    // pre-increment example:
    // res is assigned 11 now since
    // a is updated here itself
    res = ++a;
    printf("a is %d and result is %d\n", a, res); // a is 11, res is 11

    // pre-decrement example:
    // res is assigned 10 only since a is updated here
    // itself
    res = --a;
    printf("a is %d and result is %d\n", a, res); // a is 10, res is 10
    return 0;
}
```

Output
```bash
Post Increment and Decrement
a is 11 and result is 10
a is 10 and result is 11

Pre Increment and Decrement
a is 11 and result is 11
a is 10 and result is 10
```

## Multiple Operators in a Single Expression

Till now, we have only seen expressions in which we have used a single operator in a single expression. What happens when we use multiple operators in a single expression? Let’s try to understand this with the help of the below example.

```c
#include <stdio.h>

int main()
{

    int var;

    var = 10 * 20 + 15 / 5;

    printf("%d\n", var);

    return 0;
}
```

Output
```bash
203
```

Explanation: The order of evaluation of the given expression is : ( ( 10 * 20 ) + (15 / 5 ) ).

This is due to the Operator Precedence and Associativity concept in C language where the operators with higher precedence will be evaluated first. The operator precedence system helps to provide unambiguously expressions.

```c
#include <stdio.h>

int main()
{
    // declaring dimensions of the rectangle
    int length = 10;
    int breadth = 5;

    // declaring variables to store the results
    int area, perimeter;

    // calculating area
    area = length * breadth;

    // calculating perimeter
    perimeter = 2 * (length + breadth);

    // printing results
    printf("Area = %d\nPerimeter = %d", area, perimeter);

    return 0;
}
```

Output
```bash
Area = 50
Perimeter = 30
```