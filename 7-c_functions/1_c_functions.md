# C Functions

A function in C is a set of statements that when called perform some specific task. It is the basic building block of a C program that provides modularity and code reusability. The programming statements of a function are enclosed within `{}` braces, having certain meanings and performing certain operations. They are also called subroutines or procedures in other languages.

## Syntax of Functions in C

The syntax of function can be divided into 3 aspects:

1. Function Declaration
2. Function Definition
3. Function Calls

## Function Declarations

In a function declaration, we must provide the function name, its return type, and the number and type of its parameters. A function declaration tells the compiler that there is a function with the given name defined somewhere else in the program.

```c
return_type name_of_the_function (parameter_1_type parameter_1, parameter_2_type parameter_2);
```

The parameter name is not mandatory while declaring functions. We can also declare the function without using the name of the data variables.

```c
int sum(int a, int b); // Function declaration with parameter names
int sum(int, int); // Function declaration without parameter names
```

**NOTE**: *A function in C must always be declared globally before calling it.*

## Function Definition

The function definition consists of actual statements which are executed when the function is called (i.e. when the program control comes to the function).

A C function is generally defined and declared in a single step because the function definition always starts with the function declaration so we do not need to declare it explicitly. The below example serves as both a function definition and a declaration.

```c
return_type function_name (parameter_1_type parameter_1, parameter_2_type parameter_2)
    // body of the function
}
```

## Function Call

A function call is a statement that instructs the compiler to execute the function. We use the function name and arguments in the function call.

In the below example, the `sum` function is called and 10, 30 are passed to the `sum` function. After the function call, the sum of `a` and `b` is returned and control is also returned back to the `main` function of the program.

```c
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int add = sum(10, 30);
    printf("Sum is: %d\n", add);
    return 0;
}
```

Output

```bash
Sum is: 40
```

**NOTE**: *Function call is necessary to bring the program control to the function definition. If not called, the function statements will not be executed.*

## Function Return Type

Function return type tells what type of value is returned after all function is executed. When we don’t want to return a value, we can use the `void` data type.

```c
int func(parameter_1, parameter_2);
```

The above function will return an integer value after running statements inside the function.

**NOTE**: *Only one value can be returned from a C function. To return multiple values, we have to use pointers or structures.*

## Function Arguments

Function Arguments are the data that is passed to a function.

```c
func(2, 3); // 2 and 3 are the arguments passed to the function during its call
```

**NOTE**: *In C programming language, functions may be called with or without arguments, and may or may not return any values to the calling functions.*

## How does C function work?

1. **Declaring a function**: Declaring a function is a step where we declare a function. Here we define the return types and parameters of the function.

2. **Defining a function**

3. **Calling the function**: Calling the function is a step where we call the function by passing the arguments in the function.

4. **Executing the function**: Executing the function is a step where we can run all the statements inside the function to get the final result.

5. **Returning a value**: Returning a value is the step where the calculated value after the execution of the function is returned. Exiting the function is the final step where all the allocated memory to the variables, functions, etc is destroyed before giving full control to the main function.

## Types of Functions

There are 2 types of functions in C:

1. Library Functions
2. User-Defined Functions

## Library Functions in C

A library function is also referred to as a "built-in function". A compiler package already exists that contains these functions, each of which has a specific meaning and is included in the package. Built-in functions have the advantage of being directly usable without being defined, whereas user-defined functions must be declared and defined before being used.

For Example:

```c
pow(), sqrt(), strcmp(), strcpy()
```

```c
#include <math.h>
#include <stdio.h>

int main()
{

    double n = 49;
    double square = sqrt(n);

    printf("Square root of %.2f = %.2f", n, square);

    return 0;
}
```

Output

```bash
Square root of 49.00 = 7.00
```

## User-Defined Functions in C

Functions that the programmer creates are known as User-Defined functions or “tailor-made functions”. User-defined functions can be improved and modified according to the need of the programmer. Whenever we write a function that is case-specific and is not defined in any header file, we need to declare and define our own functions according to the syntax.

```c
#include <stdio.h>

void printPattern(int limit)
{

    for (int i = 1; i < limit; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
            if (j == i)
            {
                printf("\n");
            }
        }
    }
    for (int i = 1; i <= limit; i++)
    {
        printf("* ");
    }
    printf("\n");

    for (int i = limit - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("* ");
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
}

int main()
{

    int limit = 7;
    printPattern(limit);

    return 0;
}
```

Output

```bash
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
```

## Passing Parameters to Functions

`Actual parameters` (also known as "arguments") are those parameters that are specified in the calling function. While on the other hand, `formal parameters` are those parameters that are declared in the called function.

We can pass arguments to the C function in two ways:

1. Pass by Value
2. Pass by Reference

## Pass by Value

Parameter passing in this method copies values from actual parameters into formal function parameters. As a result, any changes made inside the functions do not reflect in the caller's parameters.

```c
#include <stdio.h>

void swap(int var1, int var2)
{
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    int var1 = 3, var2 = 2;
    printf("Before swap Value of var1 and var2 is: %d, %d\n",
           var1, var2);
    swap(var1, var2);
    printf("After swap Value of var1 and var2 is: %d, %d",
           var1, var2);
    return 0;
}
```

Output

```bash
Before swap Value of var1 and var2 is: 3, 2
After swap Value of var1 and var2 is: 3, 2
```

## Pass by Reference

The caller's actual parameters and the function’s actual parameters refer to the same locations, so any changes made inside the function are reflected in the caller's actual parameters.

```c
#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{
    int var1 = 3, var2 = 2;
    printf("Before swap Value of var1 and var2 is: %d, %d\n",
           var1, var2);
    swap(&var1, &var2);
    printf("After swap Value of var1 and var2 is: %d, %d",
           var1, var2);
    return 0;
}
```

Output

```bash
Before swap Value of var1 and var2 is: 3, 2
After swap Value of var1 and var2 is: 2, 3
```
