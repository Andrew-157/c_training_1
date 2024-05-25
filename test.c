// C Program to demonstrate the formatting methods.
#include <stdio.h>
int main()
{
    char str[] = "roomsformoney";
    printf("%20s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n", str);
    return 0;
}