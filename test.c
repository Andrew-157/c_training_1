#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{
    int var1 = 3, var2 = 2;
    printf("Before calling swap: %d %d\n", var1, var2);
    swap(&var1, &var2);
    printf("After calling swap: %d %d\n", var1, var2);

    return 0;
}