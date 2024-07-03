#include <stdio.h>

void decrement()
{
    int a = 5;
    int b = 5;

    // PREFIX
    int prefix = --a; // Decrement takes place before assignment
    printf("Prefix = %d\n", prefix);

    // POSTFIX
    int postfix = b--; // Decrement takes place after assignment
    printf("Postfix = %d\n", postfix);
}

int main()
{

    decrement();

    return 0;
}