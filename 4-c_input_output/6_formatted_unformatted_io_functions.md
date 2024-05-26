## Formatted and Unformatted Input/Output functions in C

## Formatted I/O Functions

Formatted I/O functions are used to take various inputs from the user and display multiple outputs to the user. These types of I/O functions can help to display the output to the user in different formats using the format specifiers. These I/O supports all data types like int, float, char, and many more.

These functions are called formatted I/O functions because we can use format specifiers in these functions and hence, we can format these functions according to our needs.

## `printf()`

printf() function is used in a C program to display any value like float, integer, character, string, etc on the console screen. It is a pre-defined function that is already declared in the stdio.h(header file). 


## `scanf()`

scanf() function is used in the C program for reading or taking any value from the keyboard by the user, these values can be of any data type like integer, float, character, string, and many more. This function is declared in stdio.h(header file), that’s why it is also a pre-defined function. In `scanf()` function we use `&`(address-of operator) which is used to store the variable value on the memory location of that variable.


## `sprintf()`

sprintf stands for “string print”. This function is similar to printf() function but this function prints the string into a character array instead of printing it on the console screen.

```c
#include <stdio.h>

// Driver code
int main()
{
    char str[50];
    int a = 2, b = 8;

    // The string "2 and 8 are even number"
    // is now stored into str
    sprintf(str, "%d and %d are even number",
            a, b);

    // Displays the string
    printf("%s", str);
    return 0;
}
```

Output
```bash
2 and 8 are even number
```

## `sscanf()`

```c
#include <stdio.h> 
  
// Driver code 
int main() 
{ 
    char str[50]; 
    int a = 2, b = 8, c, d; 
  
    // The string "a = 2 and b = 8" 
    // is now stored into str 
    // character array 
    sprintf(str, "a = %d and b = %d", 
            a, b); 
  
    // The value of a and b is now in 
    // c and d 
    sscanf(str, "a = %d and b = %d", 
           &c, &d); 
  
    // Displays the value of c and d 
    printf("c = %d and d = %d", c, d); 
    return 0; 
}
```

Output
```bash
c = 2 and d = 8
```

## Unformatted Input/Output functions

Unformatted I/O functions are used only for character data type or character array/string and cannot be used for any other datatype. These functions are used to read single input from the user at the console and it allows to display the value at the console.

These functions are called unformatted I/O functions because we cannot use format specifiers in these functions and hence, cannot format these functions according to our needs.

## `getch()`

getch() function reads a single character from the keyboard by the user but doesn’t display that character on the console screen and immediately returned without pressing enter key. This function is declared in conio.h(header file). getch() is also used for hold the screen.

```c
#include <conio.h>
#include <stdio.h>

// Driver code
int main()
{
    printf("Enter any character: ");

    // Reads a character but
    // not displays
    getch();

    printf("\nEnter a char: ");
    char a = getch();
    printf("\nChar you entered: %c", a);

    return 0;
}
```

Output
```bash
Enter any character:
Enter a char:
Char you entered: g
```

## `getche()`

getche() function reads a single character from the keyboard by the user and displays it on the console screen and immediately returns without pressing the enter key. This function is declared in conio.h(header file).

```c
#include <conio.h>
#include <stdio.h>

// Driver code
int main()
{
    printf("Enter any character: ");

    // Reads a character and
    // displays immediately
    getche();

    printf("\nEnter any character: ");
    char a = getche();
    printf("\nCharacter you entered: %c", a);

    return 0;
}
```

Output
```bash
Enter any character: E
Enter any character: f
Character you entered: f
```

## `getchar()`

The getchar() function is used to read only a first single character from the keyboard whether multiple characters is typed by the user and this function reads one character at one time until and unless the enter key is pressed. This function is declared in stdio.h(header file).

```c
#include <stdio.h>

// Driver code
int main()
{
    printf("Enter a string, but I will read only a first character: ");
    char a = getchar();
    printf("First character of the string you entered is: %c", a);

    return 0;
}
```

Output 1
```bash
Enter a string, but I will read only a first character: g
First character of the string you entered is: g
```

Output 2
```bash
Enter a string, but I will read only a first character: Hello World!
First character of the string you entered is: H
```

## `putchar()`

The putchar() function is used to display a single character at a time by passing that character directly to it or by passing a variable that has already stored a character. This function is declared in stdio.h(header file).

```c
#include <stdio.h>

// Driver code
int main()
{
    putchar('a');

    putchar('\n');

    char A = 'A';
    putchar(A);

    return 0;
}
```

Output
```bash
a
A
```

## `gets()`

gets() function reads a group of characters or strings from the keyboard by the user and these characters get stored in a character array. This function allows us to write space-separated texts or strings. This function is declared in stdio.h(header file).

```c
#include <stdio.h>

// Driver code
int main()
{
    char sentence[50];

    printf("Enter a sentence: ");

    gets(sentence);

    printf("Sentence you entered: %s", sentence);

    return 0;
}
```

Output
```bash
Enter a sentence: Hello World!
Sentence you entered: Hello World!
```

**NOTE:** *Check below note from Linux man page:*
    ```
    Never use gets(). Because it is impossible to tell without knowing the data in advance how many characters gets() will read, and because gets() will continue to store characters past the end of the buffer, it is extremely dangerous to use. It has been used to break computer security. Use fgets() instead.
    ```

## `puts()`

In C programming puts() function is used to display a group of characters or strings which is already stored in a character array. This function is declared in stdio.h(header file).

```c
#include <stdio.h>

int main()
{

    char username[50];

    printf("Enter a username: ");

    gets(username);

    printf("Username you entered: ");

    puts(username);
    return 0;
}
```

Output
```bash
Enter a username: andrew157
Username you entered: andrew157
```

## `putch()`

putch() function is used to display a single character which is given by the user and that character prints at the current cursor location. This function is declared in conio.h(header file)

```c
#include <conio.h>
#include <stdio.h>

// Driver code
int main()
{
    char ch;
    printf("Enter any character: ");

    // Reads a character from the keyboard
    ch = getch();

    printf("\nEntered character is: ");

    // Displays that character on the console
    putch(ch);
    return 0;
}
```

Output
```bash
Enter any character:
Entered character is: f
```