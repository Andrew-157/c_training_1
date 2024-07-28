#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    printf("var1 and var2 inside swap function: %d %d\n", *var1, *var2);
}

int main()
{

    int var1 = 2, var2 = 3;
    printf("var1 and var2 before calling swap function: %d %d\n", var1, var2);
    swap(&var1, &var2);
    printf("var1 and var2 after calling swap function: %d %d\n", var1, var2);
    return 0;
}