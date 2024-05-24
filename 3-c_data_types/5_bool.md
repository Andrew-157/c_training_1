## bool in C

The bool in C is a fundamental data type in most that can hold one of two values: true or false. It is used to represent logical values and is commonly used in programming to control the flow of execution in decision-making statements such as if-else statements, while loops, and for loops. In this article, we will explore how to use the bool data type in C. 

## Boolean in C

In C, the bool data type is not a built-in data type. However, the C99 standard for C language supports bool variables. Boolean can store values as true-false, 0-1, or can be yes-no. It can be implemented in C using different methods as mentioned below:

1. Using header file "stdbool.h"
2. Using Enumeration type
3. Using define to declare boolean values

## Using Header File "stdbool.h"

To use bool in C, you must include the header file `stdbool.h`. After including the `stdbool.h` library we can use the data type as boolean is not available with `stdio.h` library.

```c
#include <stdbool.h>
 
// Main Function
int main()
{
      // Boolean data types declared
    bool a = true;
    bool b = false;
 
    printf("True : %d\n", a);
    printf("False : %d", b);
 
    return 0;
}
```

Output
```bash
True : 1
False : 0
```

## Using the Enumeration Type

```c
#include <stdio.h>
 
typedef enum { false, true } bool;
 
int main()
{
    bool a = true;
    bool b = false;
 
    printf("True : %d\n", a);
    printf("False : %d", b);
 
    return 0;
}
```

Output
```bash
True : 1
False : 0
```

## Using #define to declare Boolean Values

In this case, the false value is assigned the integer value of 0, and the true value is assigned the integer value of 1. You can also use an int or a char with a value of either 0 (false) or 1 (true) to represent the bool data type in C. 

```c


#define bool int
#define false 0
#define true 1
 
int main()
{
    bool a = true;
    bool b = false;
 
    printf("True : %d\n", a);
    printf("False : %d", b);
 
    return 0;
}
```

Output
```bash
True : 1
False : 0
```

## Using Bool in Conditional Statements

The bool data type is commonly used in conditional statements such as if-else statements. Condition like if a is greater than equal to b or else b is greater than a can be implemented using boolean. These conditions using conditional operator like “==” , “>” , <” , “!=” ,etc return boolean values.

```c
// C Program to implement
// conditional statements
#include <stdbool.h>
#include <stdio.h>

// Main Function
int main()
{

	// Integers declared
	int a = 3;
	int b = 4;

	// Conditional Statements
	if (a > b) {
		printf("a is greater\n");
	}
	else {
		printf("a is smaller\n");
	}

	printf("%d is the result of a>b", a > b);

	return 0;
}
```

Output
```bash
a is smaller
0 is the result of a>b
```

## Using bool in Loops

The bool data type is also used in loops such as while loops and for loops. Conditional statements are one of the most important parts used with loops. We can’t define breakpoints of loops without using conditional statements which return boolean values, without conditional statement loop becomes infinite loop.

```c
// C Program to demonstrate
// Using bool in loops
#include <stdbool.h>
#include <stdio.h>
 
// Main Function
int main()
{
    // boolean declared
    bool a = true;
    int i = 0;
 
    // while loop
    while (a) {
        printf("i is %d\n", i);
        i++;
 
        // Conditional statement returning
        // true or false
        // Breaking point for loop
        if (i > 5) {
            a = false;
        }
    }
 
    return 0;
}
```

Output
```bash
i is 0
i is 1
i is 2
i is 3
i is 4
i is 5
```

## Using Bool as a function return type

You can also use the bool data type as a function return type. Function return type adds the feature to return the result of all the operations performed inside the function.

```c
// C Program to demonstrate using of
// bool as a function return type
#include <stdbool.h>
#include <stdio.h>
 
// function returning boolean value
bool is_even(int num)
{
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
 
// Main function
int main()
{
      // Integer value declared
    int num = 5;
 
      // Function calling
    if (is_even(num)) {
        printf("%d is even\n", num);
    }
    else {
        printf("%d is odd\n", num);
    }
 
    return 0;
}
```

Output
```bash
5 is odd
```