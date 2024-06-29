#include <stdio.h>

int main()
{
    unsigned int x = 1;

    int y = ~x;
    unsigned int z = ~x;

    printf("Signed result %d\n", y);
    printf("Unsigned result %u\n", z);
    return 0;
}