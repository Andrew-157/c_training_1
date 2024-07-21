#include <stdio.h>

int main()
{

    int N, i = 0;
    printf("Enter a number: ");
    scanf(" %d", &N);

    do
    {
        printf("%d\t*\t%d\t=\t%d\n", N, i, i * N);
    } while (i++ <= 9);

    return 0;
}