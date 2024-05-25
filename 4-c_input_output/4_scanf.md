## scanf in C

In C programming language, scanf is a function that stands for Scan Formatted String. It is used to read data from stdin (standard input stream i.e. usually keyboard) and then writes the result into the given arguments.

- It accepts character, string, and numeric data from the user using standard input

- scanf also uses format specifiers like printf

## scanf Syntax

```c
int scanf( const char *format, ... );
```

- **int** is the return type

- **format** is a string that contains the format specifier(s)

- **...** indicates that the function accepts a variable number of arguments

Example format specifiers recognized by scanf:

- `%d`: to accept input of integers

- `%ld`: to accept input of long integers

- `%lld`: to accept input of long long integers

- `%f`: to accept input of real number

- `%c`: to accept input of character types

- `%s`: to accept input of a string

## Return Value

The scanf in C returns three types of values:

- **>0**: the number of values converted and assigned successfully

- **0**: No value was assigned

- **<0**: Read error encountered or end-of-file(EOF) reached before any assignment was made

## Why `&`?

While scanning the input, scanf needs to store that input data somewhere. To store this input data, scanf needs to known the memory location of a variable. And here comes the ampersand to rescue. `&`(ampersand) is also called *The Address Operator*. For example, `&var` is the address of the variable `var`.

```c
#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("First Number: %d \t Second Number: %d", a, b);

    return 0;
}
```

Output
```bash
Enter first number: 33
Enter second number: 44
First Number: 33         Second Number: 44
```