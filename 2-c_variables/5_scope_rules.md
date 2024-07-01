## Scope Rules in C

The scope of a variable in C is the block or the region in the program where a variable is declared, defined, and used. Outside this region, we cannot access the variable and it is treated as an undeclared identifier.

- The scope is the area under which the variable is visible
- The scope of an identifier is the part of the program where the identifier may directly be accessible
- We can only refer to a variable in its scope
- In C, all identifiers are [lexically(or statically) scoped](https://www.geeksforgeeks.org/static-and-dynamic-scoping/)

Example
```c
#include <stdio.h>
 
int main()
{
    int var = 34;
 
    printf("%d", var);
    return 0;
}
 
void func() { printf("%d", var); }
```

Output
```
solution.c: In function 'func':
solution.c:15:28: error: 'var' undeclared (first use in this function)
 void func() { printf("%d", var); }
```

Here, we tried to access variable name var. As we can see that if we try to refer to the variable outside its scope, we get the above error.

## Types of Scope rules in C

There are 2 categories:

1. Global Scope
2. Local Scope

## Global Scope

The global scope refers to the region outside any block or function.

- The variables declared in the global scope are called global variables
- Global variables are visible in every part of the program
- Global is also called File Scope as the scope of an identifier starts at the beginning of the file and ends at the end of the file

Example
```c
#include <stdio.h>
  
// variable declared in global scope
int global = 5;
  
// global variable accessed from
// within a function
void display()
{
    printf("%d\n", global);
}
  
// main function
int main()
{
    printf("Before change within main: ");
    display();
  
    // changing value of global
    // variable from main function
    printf("After change within main: ");
    global = 10;
    display();
}
```

Output
```
Before change within main: 5
After change within main: 10
```

**Linkage of Variables in Global Scope**

Global variables have external linkage by default. It means that the variables declared in the global scope can be accessed in another C source file. We have to use the *extern* keyword for that purpose.

Example

file1.c
```c

    int a = 24;
```

file2.c
```c
// When this file is linked with file1.c, functions 
// of this file can access a
 
extern int a;
 
int myfun()
{
   printf("%d", a);
}
```

**Note:** *To restrict access to the current file only, global variables can be marked as static.*

## 2. Local Scope in C

The local scope refers to the region inside a block or a function. It is the space enclosed between the { } braces.

- The variables declared within the local scope are called local variables
- Local variables are visible in the block they are declared in and other blocks nested inside that block.
- Local scope is also called Block scope
- Local variables have internal linkage

Example
```c
// C program to illustrate the local scope
#include <stdio.h>
 
// Driver Code
int main()
{
    {
        int x = 10, y = 20;
        {
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            printf("x = %d, y = %d\n", x, y);
            {
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                int y = 40;
 
                // Changes the outer block
                // variable x to 11
                x++;
 
                // Changes this block's
                // variable y to 41
                y++;
 
                printf("x = %d, y = %d\n", x, y);
            }
 
            // This statement accesses
            // only outer block's
            // variables
            printf("x = %d, y = %d\n", x, y);
        }
    }
    return 0;
}
```

Output
```
x = 10, y = 20
x = 11, y = 41
x = 11, y = 20
```