#include <stdio.h>

func(int x)
{
    return x * x;
}

int main()
{
    printf("%d\n", func(10));
}