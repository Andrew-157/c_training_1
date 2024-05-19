## Different ways to declare variable as constant in C

There are many different ways to make the variable as constant in C. Some of the popular ones are:

1. *const* keyword
2. Using Macros
3. Using *enum* keyword

## 1. Using *const* keyword

## 2. Using Macros

Syntax
```c
#define var 5
```
We can also use Macros to define constant, but there is a catch. Since Macros are handled by the pre-processor(the pre-processor does text replacement in our source file, replacing all occurrences of ‘var’ with the literal 5) not by the compiler. Hence it wouldn’t be recommended because Macros doesn’t carry type checking information and also prone to error. In fact not quite constant as ‘var’ can be redefined like this.

```c
#include <stdio.h>
 
#define var 5
int main()
{
    printf("%d ", var);
 
#ifdef var
#undef var
 
// redefine var as 10
#define var 10
#endif
 
    printf("%d", var);
    return 0;
}
```

**Note:** *preprocessor and enum only works as a literal constant and integers constant respectively. Hence they only define the symbolic name of constant(Symbolic constants are nothing more than a label or name that is used to represent some fixed value that never changes throughout the course of a program.). Therefore if you need a constant variable with a specific memory address use either ‘const’ or ‘constexpr’ according to the requirement.*

## 3. Using *enum* keyword

Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, that make a program easy to read and maintain.

**Come back to this topic later**