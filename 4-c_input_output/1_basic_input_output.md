## Basic Input and Output in C

C language has standard libraries that allow input and output in a program. The stdio.h or standard input output library in C has methods for input and output.

## scanf()

The scanf() method, in C, reads the value from the console as per the type specified and store it in the given address.

Syntax:
```c
scanf("%X", &VariableOfXType);
```
where %X is the format specifier in C. It is a way to tell the compiler what type of data is in a variable and & is the address operator in C, which tells the compiler to change the real value of variableOfXType, stored at this address in the memory.

## printf()

The printf() method, in C, prints the value passed as the parameter to it, on the console screen.

Syntax:
```c
printf("%X", VariableOfXType);
```

where %X is the format specifier in C. It is a way to tell the compiler what type of data is in a variable and variableOfXType is the variable to be printed.

## How to take input and output of basic types in C?

The basic type in C includes types like int, float, char, etc. In order to input or output the specific type, the X in the above syntax is changed with the specific format specifier of that type. The Syntax for input and output for these are:

- **Integer**
```c
Input: scanf("%d", &intVariable);
Output: printf("%d", intVariable);
```

- **Float**
```c
Input: scanf("%f", &floatVariable);
Output: printf("%f", floatVariable);
```

- **Character**
```c
Input: scanf("%c", &charVariable);
Output: printf("%c", charVariable);
```

```c
// C program to show input and output

#include <stdio.h>

int main()
{

    // Declare the variables
    int num;
    char ch;
    float f;

    // --- Integer ---

    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);

    // Output the integer
    printf("Entered integer is: %d\n", num);

    // --- Float ---

    // For input Clearing buffer
    while ((getchar()) != '\n');

    // Input the float
    printf("\nEnter the float: ");
    scanf("%f", &f);

    // Output the float
    printf("Entered float is: %f\n", f);

    // --- Character ---

    // Input the Character
    printf("\nEnter the Character: ");
    scanf(" %c", &ch);

    // Output the Character
    printf("Entered character is: %c", ch);

    return 0;
}
```

**Note:** *When taking input for char in the example above, notice space `scanf(" %c", &ch);`, this is necessary before without it `Enter`(`\n`) from the previous input may be taken as input.*

Output
```
Enter the integer: 10
Entered integer is: 10

Enter the float: 2.5
Entered float is: 2.500000

Enter the Character: A
Entered Character is: A
```

## How to take input and output of advanced type in C?

The advanced type in C includes type like String. In order to input or output the string type, the X in the above syntax is changed with the %s format specifier. The Syntax for input and output for String is:
```c
Input: scanf("%s", stringVariable);
Output: printf("%s", stringVariable);
```

```c
#include <stdio.h>

int main()
{

    // Declare string variable
    // as character array
    char str[50];

    // --- String ---
    // To read a word

    // Input the Word
    printf("Enter the Word: ");
    scanf("%s", str);

    // Output the Word
    printf("Entered Word is: %s\n", str);

    // --- String ---
    // To read a Sentence

    // Input the Sentence
    printf("\nEnter the Sentence: ");
    scanf(" %[^\n]s", str);

    // Output the String
    printf("Entered Sentence is: %s", str);

    return 0;
}
```

Output
```
Enter the Word: GeeksForGeeks
Entered Word is: GeeksForGeeks

Enter the Sentence: Geeks For Geeks
Entered Sentence is: Geeks For Geeks
```