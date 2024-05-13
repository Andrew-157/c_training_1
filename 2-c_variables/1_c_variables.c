#include <stdio.h>

void something(void)
{

    int a = 5;
}

int main()
{
    something();
    printf("A: %d", a);
    return 0;
}