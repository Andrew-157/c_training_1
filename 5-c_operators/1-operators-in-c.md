## Operators in C

In C language, operators are symbols that represent operations to be performed on one or more operands.

## What is a C Operator?

An operator in C can be defined as the symbol that helps us to perform some specific mathematical, relational, bitwise, conditional, or logical computations on values and variables. The values and variables used with operators are called operands. So we can say that the operators are the symbols that perform operations on operands.

![Operators in C](./images/Operators-in-C.png "a title")

For example
```c
c = a + b;;
```

Here, `+` is the operator known as the addition operator, and `a` and `b` are operands. The addition operator tells the compiler to add both of the operands `a` and `b`.

## Types of Operators in C

C language provides a wide range of operators that can be classified into 6 types based on their functionality:

1. Arithmetic Operators

2. Relational Operators

3. Logical Operators

4. Bitwise Operators

5. Assignment Operators

6. Other Operators

## Arithmetic Operators in C

The arithmetic operators are used to perform arithmetic/mathematical operations on operands. There are 9 arithmetic operators in C language:

- `+` (Plus) - Adds two numeric values - `a + b`

- `-` (Minus) - Subtracts right operand from left operand - `a - b`

- `*` (Multiply) - Multiplies two numeric values - `a * b`

- `/` (Divide) - Divide two numeric values - `a / b`

- `%` (Modulus) - Returns the remainder after dividing the left operand with the right operand - `a % b`

- `+` (Unary Plus) - Used to specify the positive values - `+a`

- `-` (Unary Minus) - Flips the sign of the value - `-a`

- `++` (Increment) - Increases the value of the operand by 1 - `a++`

- `--` (Decrement) - Decreases the value of the operand by 1 - `a--`

```c
#include <stdio.h>

int main()
{
    int a = 25, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d", a--);

    return 0;
}
```

Output
```bash
a + b = 30
a - b = 20
a * b = 125
a / b = 5
a % b = 0
+a = 25
-a = -25
a++ = 25
a-- = 26
```

## Relational Operators in C

The relational operators in C are used for the comparison of the two operands. All these operators are binary operators that return true or false values as the result of comparison.

These are a total of 6 relational operators in C:

- `<` (Less than) - Returns true if the left operand is less than the right operand. Else false - `a < b`

- `>` (Greater than) - Returns true if the left operand is greater than the right operand. Else false - `a > b`

- `<=` (Less than or equal to) - Returns true if the left operand is less than or equal to the right operand. Else false - `a <= b`

- `>=` (Greater than or equal to) - Returns true if the left operand is greater or equal to the right operand. Else false - `a >= b`

- `==` (Equal to) - Returns true if both the operands are equal. Else false - `a == b`

- `!=` (Not equal to) - Returns true if both the operands are not equal. Else false - `a != b`

```c
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    printf("a < b is %d\n", a < b);
    printf("a > b is %d\n", a > b);
    printf("a <= b is %d\n", a <= b);
    printf("a >= b is %d\n", a >= b);
    printf("a == b is %d\n", a == b);
    printf("a != b is %d", a != b);

    return 0;
}
```

Output
```bash
a < b is 0
a > b is 1
a <= b is 0
a >= b is 1
a == b is 0
a != b is 1
```

## Logical Operators in C

Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration. The result of the operation of a logical operator is a Boolean value either true or false.

- `&&` (Logical AND) - Returns true if both the operands are true - `a && b`

- `||` (Logical OR) - Returns true if both or any of the operands is true - `a || b`

- `!` - (Logical NOT) - Returns true if the operand is false - `!a`

```c
#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool a = true, b = false, c = true;

    printf("%d\n", a && b);        // false(0)
    printf("%d\n", (a && b) || c); // true(1) - would do the same if `a && b || c`
    printf("%d\n", a || b);        // true(1)
    printf("%d\n", !b);            // true(1)
    printf("%d\n", !!a);           // true(1)
    printf("%d", !c);              // false(0)

    return 0;
}
```

Output
```bash
0
1
1
1
1
0
```

## Bitwise Operators in C

The Bitwise operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing.

There are 6 bitwise operators in C:

- `&` (Bitwise AND) - Performs bit-by-bit AND operation and returns the result - `a & b`

    **NOTE:** *The bitwise AND operator ( & ) compares each bit of the first operand to the corresponding bit of the second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.*

- `|` (Bitwise OR) - Performs bit-by-bit OR operation and returns the result - `a | b`

    **NOTE:** *A bitwise OR is a binary operation that takes two bit patterns of equal length and performs the logical `inclusive` OR operation on each pair of corresponding bits. The result in each position is 0 if both bits are 0, while otherwise the result is 1. For example: 0101 (decimal 5) OR 0011 (decimal 3) = 0111 (decimal 7)*

- `^` (Bitwise XOR) - Performs bit-by-bit XOR operation and returns the result  - `a ^ b`

    **NOTE:** *A bitwise XOR is a binary operation that takes two bit patterns of equal length and performs the logical `exclusive` OR operation on each pair of corresponding bits. The result in each position is 1 if only one of the bits is 1, but will be 0 if both are 0 or both are 1.*

- `~` (Bitwise First Complement) - Flips all the set and unset bits on the number - `~a`

- `<<` (Bitwise Leftshift) - Shifts the number in binary form by one place in the operation and returns the result - `a << b`

    ![Bitwise Leftshift](./images/Bitwise-operator-left-shift.png "a title")

- `>>` (Bitwise Rightshift) - Shifts the number in binary form by one place in the operation and returns the result - `a >> b`

    ![Bitwise Rightshift](./images/Bitwise-operator-right-shift.png "a title")

```c
#include <stdio.h>

int main()
{
    int a = 25, b = 5;

    printf("a & b is %d\n", a & b);
    printf("a | b is %d\n", a | b); // 29
    /*25 in binary is 11001 and binary of 5 is 101, bitwise OR does the following:
     A bitwise OR is a binary operation that takes two bit patterns of equal length
     and performs the logical inclusive OR operation on each pair of corresponding bits.
     The result in each position is 0 if both bits are 0, while otherwise the result is 1.
     So 25(11001) OR 5(101) is 11101 which is 29 in decimal*/
    printf("a ^ b is %d\n", a ^ b); //

    printf("%d", 0b11100);
    return 0;
}
```