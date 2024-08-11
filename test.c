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