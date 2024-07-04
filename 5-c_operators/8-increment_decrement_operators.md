## Increment and Decrement Operators in C

The increment ( `++` ) and decrement ( `--` ) operators in C are unary operators for incrementing and decrementing the numeric values by 1 respectively. The incremental and decremental are one of the most frequently used operations in programming for looping, array traversal, pointer arithmetic, and many more.

**IMPORTANT**: *postfix increment/decrement both **evaluate** to the non-changed value of the variable, and then increment or decrement variable's value*

## Increment Operator in C

The increment operator ( ++ ) is used to increment the value of a variable in an expression by 1. It can be used on variables of the numeric type such as integer, float, character, pointers, etc.

Increment operator can be used in two ways which are as follows:

```c
// AS PREFIX
++m;
// AS POSTFIX
m++;
```

### 1. Pre-Increment

In pre-increment, the increment operator is used as the prefix. Also known as prefix increment, the value is incremented first according to the precedence and then the less priority operations are done.

```c
result = ++var1;
```

The above expression can be expanded as

```c
var1 = var1 + 1;
result = var1;
```

### 2. Post-Increment

In post-increment, the increment operator is used as the suffix of the operand. The increment operation is performed after all the other operations are done. It is also known as postfix increment.

```c
result = var1++;
```

The expression above would be equivalent to

```c
result = var1;
var1 = var1 + 1;
```

```c
#include <stdio.h>

void increment()
{
    int a = 5;
    int b = 5;

    // PREFIX
    int prefix = ++a; // Increment takes place before assignment
    printf("Prefix Increment: %d\n", prefix);

    // POSTFIX
    int postfix = b++; // Increment takes place after assignment
    printf("Postfix Increment: %d\n", postfix);
}

int main()
{

    increment();

    return 0;
}
```

Output
```
Prefix Increment: 6
Postfix Increment: 5
```

As we can see in postfix, the value is incremented after the assignment operator is done.

## Decrement Operator in C

The decrement operator is used to decrement the value of a variable in an expression. In the Pre-Decrement, the value is first decremented and then used inside the expression. Whereas in the Post-Decrement, the value is first used inside the expression and then decremented.

Just like the increment operator, the decrement operator can also be used in two ways:
```c
// PREFIX
--m;
// POSTFIX
m--;
```

### 1. Pre-Decrement Operator

The pre-decrement operator decreases the value of the variable immediately when encountered. It is also known as prefix decrement as the decrement operator is used as the prefix of the operand.

```
result = --m;
```

The above can be expanded to

```c
m = m - 1;
result = m;
```

### 2. Post-Decrement Operator

The post-decrement happens when the decrement operator is used as the suffix of the variable. In this case, the decrement operation is performed after all the other operators are evaluated.

```c
result = m--;
```

which can be expanded to

```c
result = m;
m = m - 1;
```

```c
#include <stdio.h>

void decrement()
{
    int a = 5;
    int b = 5;

    // PREFIX
    int prefix = --a; // Decrement takes place before assignment
    printf("Prefix = %d\n", prefix);

    // POSTFIX
    int postfix = b--; // Decrement takes place after assignment
    printf("Postfix = %d\n", postfix);
}

int main()
{

    decrement();

    return 0;
}
```

Output
```
Prefix = 4
Postfix = 5
```