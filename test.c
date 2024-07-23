#include <stdio.h>

int main()
{

    printf("The loop with break produces the following output:\n");
    for (int i = 1; i <= 7; i++)
    {
        if (i % 3 == 0)
        {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");

    printf("The loop with continue produces the following output:\n");

    for (int i = 1; i <= 7; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}