## Character Arithmetic in C

As already known character range is between -128 to 127 or 0 to 255. This point has to be kept in mind while doing character arithmetic. 

Character arithmetic is used to implement arithmetic operations like addition, subtraction, multiplication, and division on characters in C language. 
In character arithmetic character converts into an integer value to perform the task. For this ASCII value is used.
It is used to perform actions on the strings.

```c
#include <stdio.h>

int main()
{
    char ch1 = 125, ch2 = 10; // if unsigned char was used, ch1 would be 135
    ch1 = ch1 + ch2;
    printf("%d\n", ch1);
    printf("%c\n", ch1 - ch2 - 4);
    return 0;
}
```

So %d specifier causes an integer value to be printed and %c specifier causes a character value to printed. But care has to taken that while using %c specifier the integer value should not exceed 127. 

```c


#include <stdio.h>
// driver code
int main(void)
{
    char value1 = 'a';
    char value2 = 'b';
    char value3 = 'z';
    // perform character arithmetic
    char num1 = value1 + 3;
    char num2 = value2 - 1;
    char num3 = value3 + 2;
    // print value
    printf("numerical value=%d\n", num1);
    printf("numerical value=%d\n", num2);
    printf("numerical value=%d\n", num3);
    return 0;
}
```

Output
```bash
numerical value=100
numerical value=97
numerical value=124
```

```c
#include <stdio.h>

int main()
{
    char a = 'A';
    char b = 'B';

    printf("a = %c\n", a);
    printf("b = %c\n", b);
    printf("a + b = %c\n", a + b);

    return 0;
}
```

Output
```bash
a = A
b = B
a + b = â
```

Explanation
-  In this program, two character variables a and b are declared and assigned the values ‘A’ and ‘B’, respectively. The program then adds a and b using character arithmetic, which results ‘â’. The result is then printed using the printf() function.

- Note that in character arithmetic, the characters are treated as integers based on their ASCII code values. For example, the ASCII code for ‘A’ is 65 and for ‘B’ is 66, so adding ‘A’ and ‘B’ results in 65 + 66 = 131, which is the ASCII code for 'â'.