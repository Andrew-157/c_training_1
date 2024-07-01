## Escape Sequence in C

The escape sequence in C is the characters or the sequence of characters that can be used inside the string literal. The purpose of the escape sequence is to represent the characters that cannot be used normally using the keyboard. Some escape sequence characters are the part of ASCII charset but some are not.

Different escape sequences represent different characters but the output is dependent on the compiler you are using.

## Escape Sequence List

- `\a` - Alarm or Beep - It is used to generate a bell sound in the C program.
- `\b` - Backspace - It is used to move the cursor one place backward.
- `\f` - Form Feed - It is used to move the cursor to the start of the next logical page.
- `\n` - New Line - It moves the cursor to the start of the next line.
- `\r` - Carriage Return  - It moves the cursor to the start of the current line.
- `\t` - Horizontal Tab - It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
- `\v` - Vertical Tab - It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
- `\\` - Backslash - Used to insert backslash character.
- `\'` - Single Quote - It is used to display a single quotation mark.
- `\"` - Double Quote - It is used to display double quotation marks.
- `\?` - Question Mark - It is used to display a question mark.
- `\ooo` - Octal Number - It is used to represent an octal number.
- `\xhh` - Hexadecimal Number - It represents the hexadecimal number.
- `\0` - NULL - It represents the NULL character.
- `\e` - Escape Sequence - It represents the ASCII escape character.
- `\s` - Space Character - It represents the ASCII space character.
- `\d` - Delete Character - It represents the ASCII DEL character.

Out of all these escape sequences, \n and \0 are used the most. In fact, escape sequences like \f, \a are not even used by programmers nowadays.

## Escape Sequence in C Examples

The following are the escape sequence examples that demonstrate how to use different escape sequences in C language.

1. Example to demonstrate how to use \a escape sequence in C

```c
#include <stdio.h>

int main(void)
{
    // output may depend upon the compiler
    printf("My mobile number "
           "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
    return 0;
}
```

Output
```
My mobile number is 7873923408
```

2. Example to demonstrate how to use \b escape sequence in C

```c
#include <stdio.h>

int main(void)
{
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello \b\b\b\b\b\bHi Geeks");
    return 0;
}
```

Output
```
Hi Geeks
```

3. Example to demonstrate how to use \n escape sequence in C

```c
#include <stdio.h>

int main(void)
{
    // Here we are using \n, which is a new line character.
    printf("Hello\n");
    printf("World");
    return (0);
}
```

Output
```
Hello
World
```

4. Example to demonstrate how to use \t escape sequence in C

```c
#include <stdio.h>
 
int main(void)
{
    // Here we are using \t, which is
    // a horizontal tab character.
    // It will provide a tab space
    // between two words.
    printf("Hello \t GFG");
    return (0);
}
```

Output
```
Hello      GFG
```

5. Example to demonstrate how to use \v escape sequence in C

```c
#include <stdio.h>
 
int main(void)
{
    // Here we are using \v, which
    // is vertical tab character.
    printf("Hello friends\v");
 
    printf("Welcome to GFG");
 
    return (0);
}
```

Output
```
Hello friends
                       Welcome to GFG
```

6. Example to demonstrate how to use \r escape sequence in C

```c
#include <stdio.h>

int main(void)
{
    // Here we are using \r, which
    // is carriage return character.
    printf("Hello   Geeks \rGeeksfor");
    return (0);
}
```

Output
```
GeeksforGeeks
```

7. Example to demonstrate how to use \\ escape sequence in C

```c
#include <stdio.h>
 
int main(void)
{
    // Here we are using \\
    // to print backslash character
    printf("Hello\\GFG");
    return (0);
}
```

Output
```
Hello\GFG
```

8. Example to demonstrate how to use \’ and \” escape sequence in C

```c
// C program to illustrate \' escape
// sequence/ and \" escape sequence to
// print single quote and double quote.
#include <stdio.h>
int main(void)
{
    printf("\' Hello Geeks\n");
    printf("\" Hello Geeks");
    return 0;
}
```

Output
```
' Hello Geeks
" Hello Geeks
```

9. Example to demonstrate how to use \? escape sequence in C

```c
// C program to illustrate
// \? escape sequence
#include <stdio.h>

int main(void)
{
    // Here we are using \?, which is
    // used for the presentation of trigraph
    // in the early of C programming. But
    // now we don't have any use of it.
    printf("\?\?!\n");
    return 0;
}
```

Output
```
??!
```

10. Example to demonstrate how to use \ooo escape sequence in C

```c
// C program to illustrate \OOO escape sequence
#include <stdio.h>

int main(void)
{
    // we are using \OOO escape sequence, here
    // each O in "OOO" is one to three octal
    // digits(0....7).
    char *s = "A\072\065";
    printf("%s", s);
    return 0;
}
```

Output
```
A:5
```

Explanation: Here 000 is one to three octal digits(0….7) means there must be at least one octal digit after \ and a maximum of three. Here 072 is the octal notation, first, it is converted to decimal notation which is the ASCII value of char ‘:’. At the place of \072, there is: and the output is A:5.

11. Example to demonstrate how to use \xhh escape sequence in C

```c
// C program to illustrate \XHH escape
// sequence
#include <stdio.h>
int main(void)
{
    // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    char* s = "B\x4a";
    printf("%s", s);
    return 0;
}
```

Output
```
BJ
```

Explanation: Here hh is one or more hexadecimal digits(0….9, a…f, A…F). There can be more than one hexadecimal number after \x. Here, ‘\x4a’ is a hexadecimal number and it is a single char. Firstly it will get converted into decimal notation and it is the ASCII value of the char ‘J’. Therefore at the place of \x4a, we can write J. So the output is BJ. 