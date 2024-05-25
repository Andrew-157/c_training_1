## Format Specifiers in C

The format specifier in C is used to tell the compiler about the type of data to be printed or scanned in input and output operations. They always start with a `%` symbol and are used in the formatted string in functions like `printf()`, `scanf`, `sprintf()`, etc.

## List of Format Specifiers in C

- `%c` - For character type

- `%d` - For signed integer type

- `%e` or `%E` - For scientific notation of floats

- `%f` - For float type

- `%g` or `%G` - For float type with the current precision

- `%i` - Unsigned integer

- `%ld` or `%li` - Long

- `%lf` - Double

- `%Lf` - Long Double

- `%lu` - Unsigned int or unsigned long

- `%lli` or `%lld` - Long long

- `%llu` - Unsigned long long

- `%o` - Octal representation

- `%p` - Pointer

- `%s` - String

- `%u` - Unsigned int

- `%x` or `%X` - Hexadecimal representation

- `%n` - Prints nothing

- `%%` - Prints `%` character

## Examples of Format Specifiers in C

1. Character Format Specifier – %c in C

The %c is the format specifier for the char data type in C language. It can be used for both formatted input and formatted output in C language.

```c
// C program to show input and output

#include <stdio.h>

int main()
{
    char a;

    printf("Enter a character: ");

    scanf("%c", &a);

    printf("Char you entered is: %c", a);

    return 0;
}
```

2. Integer Format Specifier (signed) – %d in C

We can use the signed integer format specifier %d in the scanf() and print() functions or other functions that use formatted string for input and output of int data type.

```c
// C Program to demonstrate the use of %d and %i
#include <stdio.h>

// Driver code
int main()
{
    int x;
    // taking integer input
    printf("Enter an integer: ");
    scanf("%d", &x);

    // printing integer output
    printf("Printed using %%d: %d\n", x);
    printf("Printed using %%i: %3i\n", x);
    return 0;
}
```

Output if entered integer has less than 3 digits
```bash
Printed using %d: 1
Printed using %i:   1
```

Output if entered integer has 3 or more digits
```bash
Printed using %d: 333
Printed using %i: 333
```

`%3i` specifier does it

3. Unsigned Integer Format Specifier –  %u in C

```c
#include <stdio.h>

// driver code
int main()
{
    unsigned int var;

    printf("Enter an integer: ");
    scanf("%u", &var);

    printf("Entered Unsigned Integer: %u\n", var);

    // trying to print negative value using %u
    printf("Printing -10 using %%u: %u\n", -10);
    return 0;
}
```

Output
```bash
Entered unsigned integer: 25
Printing -10 using %u: 4294967286 // 2^32 - 10 = 4294967286
```

4. Floating-point format specifier – %f in C

The %f is the floating point format specifier in C language that can be used inside the formatted string for input and output of float data type. Apart from %f, we can use %e or %E format specifiers to print the floating point value in the exponential form.

```c
#include <stdio.h>

// driver code
int main()
{
    float x;
    printf("Enter float: ");
    scanf("%f", &x);
    printf("Float you entered: %f\n", x);

    float a;
    printf("Enter float: ");
    scanf("%e", &a);
    printf("Float you entered: %e\n", a);

    float b;
    printf("Enter float: ");
    scanf("%E", &b);
    printf("Float you entered: %E\n", b);

    return 0;
}
```

Output
```bash
Enter float: 12.67
Float you entered: 12.670000
Enter float: 1.267000e+01
Float you entered: 1.267000e+001
Enter float: 1.267000E+01
Float you entered: 1.267000E+001
```

or

Output
```bash
Enter float: 12.67
Float you entered: 12.670000
Enter float: 1.267000E+01
Float you entered: 1.267000e+001
Enter float: 1.267000e+01
Float you entered: 1.267000E+001
```

5. Unsigned Octal number for integer – %o in C

We can use the %o format specifier in the C program to print or take input for the unsigned octal integer number.

```c
#include <stdio.h>

// driver code
int main()
{
    int a;
    printf("Enter integer in octal: ");
    scanf("%o", &a);

    printf("Integer you entered in octal form: %o\n", a);
    printf("Integer you entered in decimal form: %d", a);

    return 0;
}
```

Output
```bash
Enter integer in octal: 074
Integer you entered in octal form: 74
Integer you entered in decimal form: 60
```

6. Unsigned Hexadecimal for integer – %x in C

The %x format specifier is used in the formatted string for hexadecimal integers. In this case, the alphabets in the hexadecimal numbers will be in lowercase. For uppercase alphabet digits, we use %X instead.

```c
#include <stdio.h>

// driver code
int main()
{
    int a;

    printf("Enter integer in hexadecimal form in lowercase: ");
    scanf("%x", &a);
    printf("Entered integer in hexadecimal form in lowercase: %x\n", a);

    printf("Enter integer in hexadecimal form in uppercase: ");
    scanf("%X", &a);
    printf("Entered integer in hexadecimal form in uppercase: %X\n", a);

    printf("In decimal form: %d", a);

    return 0;
}
```

Output
```bash
Enter integer in hexadecimal form in lowercase: 3c
Entered integer in hexadecimal form in lowercase: 3c
Enter integer in hexadecimal form in uppercase: 3C
Entered integer in hexadecimal form in uppercase: 3C
In decimal form: 60
```

or

```bash
Enter integer in hexadecimal form in lowercase: 3C
Entered integer in hexadecimal form in lowercase: 3c
Enter integer in hexadecimal form in uppercase: 3c
Entered integer in hexadecimal form in uppercase: 3C
In decimal form: 60
```

7. String Format Specifier – %s in C

The %s in C is used to print strings or take strings as input.

```c
#include <stdio.h>

// driver code
int main()
{
    char a[50];
    printf("Enter a word: ");
    scanf("%s", &a);
    printf("Entered word: %s\n", a);

    char b[50];
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", b);
    printf("Entered sentence: %s", b);

    return 0;
}
```

Output
```bash
Enter a word: Hello
Entered word: Hello
Enter a sentence: Hello World!
Entered sentence: Hello World!
```

The working of %s with scanf() is a little bit different from its working with printf(). The string is only scanned till a whitespace is encountered. We can avoid that by using scansets in C.

8. Address Format Specifier – %p in C

The C language also provides the format specifier to print the address/pointers. We can use %p to print addresses and pointers in C.

```c
#include <stdio.h>
int main()
{
    int a = 10;
    printf("The Memory Address of a: %p\n",(void*)&a);
    return 0;
}
```

Output
```bash
The Memory Address of a: 0x7ffe9645b3fc
```

## Input and Output Formatting

C language provides some tools using which we can format the input and output. They are generally inserted between the % sign and the format specifier symbol. Some of them are as follows:

1. A minus(-) sign tells left alignment.

2. A number after % specifies the minimum field width to be printed. If the characters are less than the size of the width the remaining space is filled with space and if it is greater then it is printed as it is without truncation.

3. A period( . ) symbol separates field width with precision.

Precision tells the minimum number of digits in an integer, the maximum number of characters in a string, and the number of digits after the decimal part in a floating value.

Example of I/O Formatting

```c
// C Program to demonstrate the formatting methods.
#include <stdio.h>
int main()
{
    char str[] = "roomsformoney";
    printf("%20s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n", str);
    return 0;
}
```

Output
```bash
       roomsformoney
roomsformoney
               rooms
rooms
```