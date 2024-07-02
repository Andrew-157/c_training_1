## Assignment Operators in C

Assignment operators are used for assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of the variable on the left side otherwise the compiler will raise an error.

## 1. `=` 

This is the simplest assignment operator. This operator is used to assign the value on the right to the variable on the left.

```c
a = 10;
b = 20;
ch = 'y';
```

## 2. `+=`

This operator is combination of `+` and `=` operators. This operator first adds the current value of the variable on left to the value on the right and then assigns the result to the variable on the left.

```
(a += b) can be written as (a = a + b)
```

## 3. `-=`

This operator is combination of `-` and `=` operators. This operator first subtracts the value on the right from the current value of the variable on left and then assigns the result to the variable on the left.

```
(a -= b) can be written as (a = a - b)
```

## 4. `*=`

This operator is combination of `*` and `=` operators. This operator first multiplies the current value of the variable on left to the value on the right and then assigns the result to the variable on the left.

```
(a *= b) can be written as (a = a * b)
```

## 5. `/=`

This operator is combination of `/` and `=` operators. This operator first divides the current value of the variable on left by the value on the right and then assigns the result to the variable on the left.

```
(a /= b) can be written as (a = a / b)
```

```c
#include <stdio.h>

void print_a(int a)
{
    printf("Value of a is %d\n", a);
}

int main()
{

    int a = 10;
    print_a(a);
    a += 10;
    print_a(a);
    a -= 10;
    print_a(a);
    a *= 10;
    print_a(a);
    a /= 10;
    print_a(a);

    return 0;
}
```

Output
```
Value of a is 10
Value of a is 20
Value of a is 10
Value of a is 100
Value of a is 10
```