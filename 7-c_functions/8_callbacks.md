# Callbacks in C

A callback is any executable code that is passed as an argument to another code, which is expected to call back (execute) the argument at a given time. In simple language, If a reference of a function is passed to another function as an argument to call it, then it will be called a Callback function.

In C, a callback function is a function that is called through a function pointer.

Below is a simple example in C to illustrate the above definition to make it more clear.

```c
#include <stdio.h>

void A()
{
    printf("I am a callback function\n");
}

void B(void (*ptr)())
{
    (*ptr)(); // callback to function A
}

int main()
{
    void (*ptr)() = &A;

    // Calling function B with
    // the address of function A as an argument
    B(ptr);

    return 0;
}
```

Output

```bash
I am a callback function
```
