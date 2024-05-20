#include <stdio.h>

int main()
{
    int size_of_integer = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);

    printf("Size of Integer: %d\n", size_of_integer);
    printf("Size of Char: %d\n", size_of_char);
    printf("Size of Float: %d\n", size_of_float);
    printf("Size of Double: %d\n", size_of_double);

    return 0;
}