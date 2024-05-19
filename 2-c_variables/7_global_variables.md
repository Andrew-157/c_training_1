## Global Variables in C


In a programming language, each variable has a particular scope attached to them. The scope is either local or global. This article will go through global variables, their advantages, and their properties.

The Declaration of a global variable is very similar to that of a local variable. The only difference is that the global variable is declared outside any function. We can take an example by assuming that we have a chair at our house and one in our school/college then we can say that the chair at our home can only be accessed by the people living inside the home but the chair in our college can be used by any student or faculty.

Example
```c
// C program to show declaration of global variable
#include <stdio.h>
 
int x = 5; // global variable
int main() {
 
      int y = 10; // local variable
    return 0;
}
```

Global variables do not stay limited to a specific function, which means that one can use any given function to access and modify the global variables. The initialization of these variables occurs automatically to 0 during the time of declaration. Also, we generally write the global variables before the main() function.

## Use of the Global Variable

The global variables get defined outside any function- usually at the very beginning/top of a program. After this, the variables hold their actual values throughout the lifetime of that program, and one can access them inside any function that gets defined for that program.

As already stated earlier, any function can access a global variable. It means that once you execute a program, its global variable will be available for use throughout the running of the entire program.

Advantages of Global Variable:

- Global variables can be accessed by all the functions present in the program.
- Only a one-time declaration is required.
- Global variables are very useful if all the functions are accessing the same data.

Disadvantages of Global Variable

- The value of a global variable can be changed accidentally as it can be used by any function in the program.
- If we use a large number of global variables, then there is a high chance of error generation in the program.

```c


// C program to update global variables
#include <stdio.h>
 
int a, b; // global variables
 
void add()
{ // we are adding values of global a and b i.e. 10+15
    printf("%d", a + b);
}
 
int main()
{
    // we are now updating the values of global variables
    // as you can see we dont need to redeclare a and b
    // again
    a = 10;
    b = 15;
    add();
    return 0;
}
```
