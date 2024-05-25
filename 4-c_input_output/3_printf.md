## printf in C

In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen).  The printf function is a part of the C standard library <stdio.h> and it can allow formatting the output in numerous ways.

**Syntax**
```c
printf("formatted_string", arguments_list);
```

**Parameters**

- **formatted_string** - it is a string that specifies the data to be printed. It may also contain a format specifier to print the value of any variable such as a character and an integer

- **arguments_list** - These are the variable names corresponding to the format specifier

**Return Value**
- printf() returns the number of characters printed after successful execution

- If an error occurs, a negative value is returned

## Formatting in C printf

In C, a value can be a character type, integer type, float type, and so on. To display and format these values using printf, we have format specifiers that are used in the formatted string. These format specifiers start with the percentage symbol `%`.

Syntax of Format Specifier
```
%[flags][width][.precision][length]specifier
```

1. Specifier

It is the character that denotes the type of data. Some commonly used specifiers are:

- `%d`: for printing integers
- `%f`: for printing floating-point numbers
- `%c`: for printing characters
- `%s`: for printing strings
- `%p`: for printing memory addresses
- `%x`: for printing hexadecimal values

2. Width

It is the sub-specifier that denotes the minimum number of characters that will be printed.

If the number of characters is less than the specified width, the white space will be used to fill the remaining characters’ places. But if the number of characters is greater than the specified width, all the characters will be still printed without cutting off any.

Syntax

```c
printf("%25s", some_string);
```

or 

```c
printf("%*s", 25, some_string);
```

3. Precision

Precision subspecifier meaning differs for different format specifiers it is being used with.

- **For Integral data(d, i, u, o, x, X)(Whole Numbers):** Specifies the minimum number of digits to be printed. But unlike the width sub-specifier, instead of white spaces, this sub-specifier adds leading zeroes to the number. If the number has more digits than the precision, the number is printed as it is.

- **For Float or Double Data(f, e, a, A):** Specifies the number of digits to be printed after the decimal point.

- **For String (s):** pecifies the length of the string to be printed.

Syntax

```c
printf("%.10d", some_integer);
printf("%.3f", some_float);
printf("%.25s", some_string);
```

or

```c
printf("%.*d", 10,  some_integer);
printf("%.*f", 3, some_float);
printf("%.*s", 25, some_string);
```

4. Length

Specifies the length of the data type in the memory. It is used in correspondence with data type modifiers.

There are 3 length sub-specifiers:

- `h`: With short int and unsigned short int
- `l`: With long int and unsigned long int
- `L`: With long double

## Examples of `printf` in C

1. Print a Variable using Specifier in printf()

```c
// C program to print a variable
#include <stdio.h>
int main()
{
    int num1 = 99;
    int num2 = 1;
    printf("The sum of %d and %d is %d\n", num1, num2,
           num1 + num2);
    return 0;
}
```

Output
```bash
The sum of 99 and 1 is 100
```

2. printf with Specified Width

```c
// C program to illustrate the use of printf with width
// specifier
#include <stdio.h>

int main()
{
    // number to be printed
    int num = 123456;
    // printing the num with 10 width and getting the
    // printed characters in char_printed
    printf("Printing num with width 10: ");
    int chars_printed = printf("%10d", num);
    printf("\nNumber of characters printed: %d",
           chars_printed);

    // specifying with using other method
    printf("\nPrinting num with width 3: ");
    chars_printed = printf("%*d", 3, num);
    printf("\nNumber of characters printed: %d",
           chars_printed);

    return 0;
}
```

Output
```bash
Printing num with width 10:     123456
Number of characters printed: 10
Printing num with width 3: 123456
Number of characters printed: 6
```

## printf with Precision Sub-Specifier

```c
// C program to illustrate the use of precision
// sub-specifier
#include <stdio.h>

int main()
{
    int num = 2451;
    float dec = 12.45126;
    char *str = "RoomsForMoney";

    // precision for integral data
    printf("For integers: %.10d\n", num);
    // precision for numbers with decimal points
    printf("For floats: %.2f\n", dec);
    // for strings
    printf("For strings: %.5s", str);

    return 0;
}
```

Output
```bash
For integers: 0000002451
For floats: 12.45
For strings: Rooms
```

4. printf with Length Sub-Specifier

```c
// C program to illustrate the length modifier
#include <stdio.h>

int main()
{
    long var = 3000000000;
    // printing var using %d
    printf("Using %%d: %d", var);
    // printing var using %ld
    printf("\nUsing %%ld: %ld", var);

    return 0;
}
```

Output
```bash
Using %d: -1294967296
Using %ld: 3000000000
```