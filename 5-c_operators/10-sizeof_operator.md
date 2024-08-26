## `sizeof` Operator in C

`sizeof` is a much-used operator in the C. It is a compile-time unary operator which can be used to compute the size of its operand. The result of sizeof is of the unsigned integral type which is usually denoted by `size_t`. sizeof can be applied to any data type, including primitive types such as integer and floating-point types, pointer types, or compound data types such as Structure, union, etc.

```c
sizeof(Expression);
```

where 'Expression' can be a data type or a variable of any type

## Usage of `sizeof` Operator

`sizeof` operator is used in different ways according to the operand type.

1. **When the operand is a Data Type**: When sizeof() is used with the data types such as int, float, char… etc it simply returns the amount of memory allocated to that data types. 

```c
#include <stdio.h>

int main()
{
    printf("%u\n", sizeof(char));
    printf("%u\n", sizeof(int));
    printf("%u\n", sizeof(float));
    printf("%u\n", sizeof(double));

    return 0;
}
```

Output
```
1
4
4
8
```

**NOTE**: *Output of the above program is compiler-dependant.*

2. **When the operand is an expression**: When sizeof() is used with the expression, it returns the size of the expression. 

```c
#include <stdio.h>

int main()
{
    int a = 0;
    double b = 10.21;
    printf("%u\n", sizeof(a + b));

    return 0;
}
```

Output
```
8
```

As we know from the first case size of int and double is 4 and 8 respectively, a is int variable while d is a double variable. The final result will be double, hence the output of our program is 8 bytes.

## Type of operator

sizeof() is a compile-time operator. compile time refers to the time at which the source code is converted to a binary code. It doesn’t execute (run) the code inside ().

```c
#include <stdio.h>

int main()
{
    int y;
    int x = 11;

    // value of x doesn't change
    y = sizeof(x++);

    // prints 4 and 11
    printf("%i %i", y, x);

    return 0;
}
```

Output
```
4 11
```

If we try to increment the value of x, it remains the same. This is because x is incremented inside the parentheses and sizeof() is a compile-time operator.  

## Need of Sizeof

1. **To find out the number of elements in an array**: Sizeof can be used to calculate the number of elements of the array automatically. 

```c
#include <stdio.h>

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    size_t length = sizeof(array) / sizeof(array[0]);

    printf("The number of elements in the array is %u\n", length);

    return 0;
}
```

Output
```
The number of elements in the array is 8
```

2. **To allocate a block of memory dynamically**: sizeof is greatly used in dynamic memory allocation. For example, if we want to allocate memory that is sufficient to hold 10 integers and we don’t know the `sizeof(int)` in that particular machine. We can allocate with the help of sizeof. 

Syntax
```c
int* ptr = (int*)malloc(10 * sizeof(int));
```

! Come back to this later.
