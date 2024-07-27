#include <stdio.h>

int main()
{

    int i = 1;
something:
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        goto something;
    }

    return 0;
}