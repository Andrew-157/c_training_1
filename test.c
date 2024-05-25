#include <stdio.h>

int main()
{

    int a, b;

    int scanf_return = scanf("%d %d", &a, &b);
    printf("A: %d\nB: %d", a, b);

    printf("\n%d", scanf_return);
    return 0;
}