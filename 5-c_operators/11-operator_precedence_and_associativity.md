## Operator Precedence and Associativity in C

The concept of operator precedence and associativity in C helps in determining which operators will be given priority when there are multiple operators in the expression. It is very common to have multiple operators in C language and the compiler first evaluates the operator with higher precedence. It helps to maintain the ambiguity of the expression and helps us in avoiding unnecessary use of parenthesis.

**NOTE**: *In programming language theory, the `associativity` of an operator is a property that determines how operators of the same precedence are grouped in the absence of parentheses.*

## Operator Precedence and Associativity Table

The following tables list the C operator precedence from highest to lowest and the associativity for each of the operators:

![Operator Precedence and Associativity Table Part 1](./images/operator-precedence-associativity-table-1.png "a title")

![Operator Precedence and Associativity Table Part 2](./images/operator-precedence-associativity-table-2.png "a title")


Easy Trick to Remember the Operators Associativity and Precedence: **PUMA'S REBL TAC**

where, P = Postfix, U = Unary, M = Multiplicative, A = Additive, S = Shift, R = Relational, E = Equality, B = Bitwise, L = Logical, T = Ternary, A = Assignment and C = Comma


## Operator Precedence in C

**Operator precedence** determines which operation is performed first in an expression with more than one operator with different precedence.

### Example of Operator Precedence

Let's try to evaluate the following expression:

```c
10 + 20 * 30
```

The expression contains two operators, `+` (plus), and `*` (multiply). According to the given table, the `*` has higher precedence than `+` so, the first evaluation will be:

```c
10 + (20 * 30)
```

After evaluating the higher precedence operator, the expression is

```c
10 + 600
```

Now, the `+` operator will be evaluated

```
610
```

We can verify it using the following C program

```c
#include <stdio.h>

int main()
{
    // printing the value of the same expression
    printf("10 + 20 * 30 = %d\n", 10 + 20 * 30);

    return 0;
}
```

Output
```
10 + 20 * 30 = 610
```

As we can see, the expression is evaluated as, `10 + (20 * 30)` but not as `(10 + 20) * 30` due to `*` operator having higher precedence.

## Operator Associativity

**Operator associativity** is used when two operators of the same precedence appear in an expression. Associativity can be either from `Left to Right` or `Right to Left`.

### Example of Operator Associativity

Let's evaluate the following expression:

```c
100 / 5 % 2
```

Both `/` (division) and `%` (Modulus) operators have the same precedence, so the order of evaluation will be decided by associativity.

According to the table, the associativity of multiplicative operators is from `Left to Right`, so

```c
(100 / 5) % 2
```

After evaluation, the expression will be

```
20 % 2
```

Now, the `%` operator will be evaluated

```c
0
```

We can verify the above using the following C program

```c
#include <stdio.h>

int main()
{

    // Verifying the result of the same expression
    printf("100 / 5 %% 2 = %d\n", 100 / 5 % 2);

    return 0;
}
```

Output
```
100 / 5 % 2 = 0
```

```
Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions.
```

## Example of Operator Precedence and Associativity

In general, the concept of precedence and associativity is applied together in expressions. So let’s consider an expression where we have operators with various precedence and associativity

```c
exp = 100 + 200 / 10 - 3 * 10
```

Here, we have four operators, in which the `/` and `*` operators have the same precedence but have higher precedence than the `+` and `–` operators. So, according to the `Left-to-Right` associativity of `/` and `*`, `/` will be evaluated first.

```c
exp = 100 + (200 / 10) - 3 * 10 = 100 + 20 - 3 * 10
```

After that, `*` will be evaluated

```c
exp = 100 + 20 - (3 * 10) = 100 + 20 - 30
```

Now, between `+` and `–`, `+` will be evaluated due to `Left-to-Right` associativity.

```c
exp = (100 + 20) - 30 = 120 - 30
```

At last, `-` will be evaluated

```c
exp = 120 - 30 = 90
```

Again, we can verify this using the following C program

```c
#include <stdio.h>

int main()
{
    // getting the result of the same expression as the example
    printf("100 + 200 / 10 - 3 * 10 = %d\n", 100 + 200 / 10 - 3 * 10);

    return 0;
}
```

Output
```
100 + 200 / 10 - 3 * 10 = 90
```

## Important Points

There are a few important points and cases that we need to remember for operator associativity and precedence which are as follows:

1. Associativity is only used when there are two or more operators of the same precedence.

The point to note is associativity doesn't define the order in which operands of a single operator are evaluated.

2. We can use parenthesis to change the order of evaluation

Parenthesis `()` got the highest priority among all the C operators. So, if we want to change the order of evaluation in an expression, we can enclose that particular operator in  `()` parenthesis along with its operands.

Consider the given expression

```c
100 + 200 / 10 - 3 * 10 = 90
```

But if we enclose 100 + 200 in parenthesis, then the result will be different.
```c
(100 + 200) / 10 - 3 * 10 = 0
```

As the `+` operator will be evaluated before `/` operator.

3. All operators with the same precedence have the same associativity

This is necessary, otherwise, there won’t be any way for the compiler to decide the evaluation order of expressions that have two operators of the same precedence and different associativity. For example `+` and `–` have the same associativity.

4. Precedence and associativity of postfix `++` and prefix `++` are different

The precedence of postfix ++ is more than prefix `++`, their associativity is also different. The associativity of postfix ++ is left to right and the associativity of prefix `++` is right to left

5. Comma has the least precedence among all operators and should be used carefully

For example, consider the following program, the output is 1

```c
#include <stdio.h>

int main()
{
    int a;
    a = 1, 2, 3; // Evaluated as (a = 1), 2, 3
    printf("%d", a);
    return 0;
}
```

Output
```
1
```

Assignment operator `=` has higher precedence than comma `,`. So, `=` is evaluated at first `a = 1`, and all commas are evaluated then, but have zero effect, even `-Wall` option in gcc will tell that.

However, if you do this:

```c
#include <stdio.h>

int main()
{
    int a;
    a = (1, 2, 3); 
    printf("%d", a);
    return 0;
}
```

The output will be:

```
3
```

But, warnings from `-Wall` will be different:

For program with: `a = 1, 2, 3;`:

```
.\test.c: In function 'main':
.\test.c:6:10: warning: right-hand operand of comma expression has no effect [-Wunused-value]
     a = 1, 2, 3;
          ^
.\test.c:6:13: warning: right-hand operand of comma expression has no effect [-Wunused-value]
     a = 1, 2, 3;
             ^
```

For program with `a = (1, 2, 3);`:

```
.\test.c: In function 'main':
.\test.c:6:11: warning: left-hand operand of comma expression has no effect [-Wunused-value]
     a = (1, 2, 3);
           ^
.\test.c:6:14: warning: left-hand operand of comma expression has no effect [-Wunused-value]
     a = (1, 2, 3);
              ^
```

6. There is no chaining of comparison operators in C

```c
#include <stdio.h>

int main()
{

    int a = 10, b = 20, c = 30;
    // (c > b > a) is treated as ((c  > b) > a), associativity of '>'
    // is left to right. Therefore the value becomes ((30 > 20) > 10)
    // which becomes (1 > 10)
    if (c > b > a)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
```

Output

```
FALSE
```

`-Wall` option will warn you that: "comparisons like 'X<=Y<=Z' do not have their mathematical meaning"

Same program in Python

```python
a, b, c = 10, 20, 30

if c > b > a:
    print("TRUE")
else:
    print("FALSE")

```

Output

```
TRUE
```