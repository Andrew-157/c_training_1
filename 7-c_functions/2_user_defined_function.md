# User-Defined Function in C

A user-defined function is a type of function in C language that is defined by the user himself to perform some specific task. It provides code reusability and modularity to our program. User-defined functions are different from built-in functions as their working is specified by the user and no header file is required for their usage.

The user-defined function in C can be divided into three parts:

1. Function Prototype
2. Function Definition
3. Function Call

## Function Prototype

A function prototype is also known as a function declaration which specifies the function's name, function parameters, and return type. The function prototype does not contain the body of the function.  It is basically used to inform the compiler about the existence of the user-defined function which can be used in the later part of the program.

**NOTE**: *A function declaration precedes the function definition and specifies the name, return type, storage class, and other attributes of a function. To be a prototype, the function declaration must also establish types and identifiers for the function's arguments. Function Declaration: `int g1()`, Function Prototype: `g1(void)` or `g1(int arg1)` or `g1(int)`.* - Not Completely Sure about it.

Syntax

```c
return_type function_name (type1 arg1, type2 arg2, ... typeN argN);
```

We can also skip the name of the arguments in the function prototype. So,

```c
return_type function_name (type1 , type2 , ... typeN);
```

## Function Definition

Once the function has been called, the function definition contains the actual statements that will be executed. All the statements of the function definition are enclosed within `{}` braces.

Syntax:

```c
return_type function_name (type1 arg1, type2 arg2 .... typeN argN) {

    // actual statements to be executed
    // return value if any
}
```

**NOTE**: *If the function call is present after the function definition, we can skip the function prototype part and directly define the function.*

## Function Call

In order to transfer control to a user-defined function, we need to call it. Functions are called using their names followed by round brackets. Their arguments are passed inside the brackets.

Syntax

```c
function_name(arg1, arg2, ... argN);
```

```c
#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function Definition
int sum(int x, int y)
{
    return x + y;
}

int main()
{

    int x = 10, y = 11;
    // Function Call
    int result = sum(x, y);
    printf("The Sum of %d and %d is %d\n", x, y, result);

    return 0;
}
```

Output

```bash
The Sum of 10 and 11 is 21
```

## Components of Function Definition

There are 3 components of the function definition:

1. Function Parameters
2. Function Body
3. Return Value

### Function Parameters

Actual function parameters (also known as arguments) are the values that are passed to the called function by the caller. We can pass none or any number of actual function parameters to the function.

We have to define the function name and its type in the function definition and we can only pass the same number and type of parameters in the function call.

Example

```c
int foo(int a, int b);
```

Here, `a` and `b` are the function parameters.

**NOTE**: *C language provides a method using which we can pass variable number of arguments to the function. Such functions are called `variadic function`.*

### Function Body

The function body is the set of statements that are enclosed within `{}` braces. They are the statements that are executed when the function is called.

Example

```c
int foo (int a, int b) {
    int sum = a + b; // function body
    return sum; // function body
}
```

### Return Value

The return value is the value returned by the function to its caller. A function can only return a single value(by default, but pointers or structures can be used to return multiple values) and it is optional. If no value is to be returned, the return type is defined as void.

The `return` keyword is used to return the value from a function.

Syntax

```c
return (expression);
```

Example

```c
int foo (int a, int b) {
    return a + b;
}
```

## Passing Parameters to User-Defined Functions in C

We can pass parameters to a function in C using 2 methods:

1. Call By Value
2. Call By Reference

**NOTE**: *`Call-By-Value`/`Call-By-Reference` are synonymous to `Pass-By-Value`/`Pass-By-Reference`.*

### Call By Value

In call by value, a copy of the value is passed to the function and changes that are made to the function are not reflected back to the values. Actual and formal parameters are created in different memory locations.

```c
#include <stdio.h>

void swap(int var1, int var2)
{
    int temp = var1;
    var1 = var2;
    var2 = temp;
    printf("var1 and var2 inside swap function: %d %d\n", var1, var2);
}

int main()
{

    int var1 = 2, var2 = 3;
    printf("var1 and var2 before calling swap function: %d %d\n", var1, var2);
    swap(var1, var2);
    printf("var1 and var2 after calling swap function: %d %d\n", var1, var2);
    return 0;
}
```

Output

```bash
var1 and var2 before calling swap function: 2 3
var1 and var2 inside swap function: 3 2
var1 and var2 after calling swap function: 2 3
```

**NOTE**: *Values aren't changed after the call by value since they aren't passed by reference.*

### Call By Reference

In a Call By Reference, the address of the argument is passed to the function, and changes that are made inside the function are reflected back to the values. We use the pointers of the required type to receive the address in the function.

```c
#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    printf("var1 and var2 inside swap function: %d %d\n", *var1, *var2);
}

int main()
{

    int var1 = 2, var2 = 3;
    printf("var1 and var2 before calling swap function: %d %d\n", var1, var2);
    swap(&var1, &var2);
    printf("var1 and var2 after calling swap function: %d %d\n", var1, var2);
    return 0;
}
```

Output

```bash
var1 and var2 before calling swap function: 2 3
var1 and var2 inside swap function: 3 2
var1 and var2 after calling swap function: 3 2
```
