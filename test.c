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