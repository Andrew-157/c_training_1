#include <stdio.h>

void print_a(int a)
{
    printf("Value of a is %d\n", a);
}

int main()
{

    int a = 10;
    print_a(a);
    a += 10;
    print_a(a);
    a -= 10;
    print_a(a);
    a *= 10;
    print_a(a);
    a /= 10;
    print_a(a);

    return 0;
}