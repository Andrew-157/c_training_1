# Parameter Passing Techniques in C

In C, there are different ways in which parameter data can be passed into and out of methods and functions. Let us assume that a function `B()` is called from another function `A()`. In this case, `A` is called the "caller function" and `B` is called the "called function or callee function". Also, the arguments which `A` sends to `B` are called "actual arguments" and the parameters of `B` are called "formal arguments".

## Terminology

- **Formal Parameter** -  A variable and its type as it appears in the prototype of the function or method.
- **Actual Parameter** - The variable or expression corresponding to a formal parameter that appears in the function or method call in the calling environment.
- **Modes**:
  - **IN** - Passes info from caller to the callee.
  - **OUT** - Callee writes values in the caller.
  - **IN/OUT** - The caller tells the callee the value of the variable, which the callee may update.

## Methods of Parameter Passing in C

There are two ways in which we can pass the parameters to the function in C:

### Pass by Value

This method uses `in-mode` semantics. Changes made to formal parameters do not get transmitted back to the caller. Any modifications to the formal parameter variable inside the called function or method affect only the separate storage location and will not be reflected in the actual parameter in the calling environment. This method is also called "Call by Value".

Example of Pass by Value

```c
#include <stdio.h>

void func(int x, int y)
{
    x += y;
    printf("In func: x = %d, y = %d\n", x, y);
}

int main()
{
    int x = 5, y = 7;
    func(x, y);
    printf("In main: x = %d, y = %d\n", x, y);
    return 0;
}
```

Output

```bash
In func: x = 12, y = 7
In main: x = 5, y = 7
```

Shortcomings of "Pass by Value"

- Inefficiency in storage allocation
- For objects and arrays, the copy semantics are costly

### Pass by Reference

This technique uses a pointer. In function we pass memory address (pointer) of a variable rather than passing the actual value of variable. This passing technique allows the function to access and modify the content at that particular memory location.

```c
#include <stdio.h>

void modify(int *ptr)
{
    *ptr += 5;
}

int main()
{
    int x = 5;
    printf("Value of x before calling modify function: %d\n", x);

    int *myPtr = &x;
    modify(myPtr); // modify(&x) works the same, this may be obvious if you know pointers, but I don't yet :)
    printf("Value of x after calling modify function: %d\n", x);

    return 0;
}
```

Output

```bash
Value of x before calling modify function: 5
Value of x after calling modify function: 10
```

Shortcomings of "Pass by Reference"

- Pointers can be null, so `Null Pointer` issues arise if not checked properly

**NOTE**: *A Null Pointer is a pointer that does not point to any memory location. It stores the base address of the segment. The null pointer basically stores the Null value while void is the type of the pointer. A null pointer is a special reserved value which is defined in a stddef header file.*

- If more than one pointers point to the same memory location then changes made by one pointer affect other pointers

- memory management should be done effectively using functions like `malloc` and `free`

### Other Methods of Parameter Passing

These techniques are older and were used in earlier programming languages like Pascal, Algol, and Fortran. These techniques are not applicable in high-level languages.

1. Pass by Result (Call by Result)

2. Pass by Value-Result (Call by Value-Result)

3. Pass by Name (Call by Name)
