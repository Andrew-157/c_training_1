#include <stdio.h>

int main()
{

    int a = 74;      // in hexadecimal: 0x4a, in octal: 0112, in binary: 0b1001010
    printf("%c", a); // J

    printf("\n");

    char b = 'J';
    printf("%d", b); // 74

    printf("\n");

    char *c = "\112"; // in hexadecimal: \x4a, in octal: \112
    printf("%s", c);  // J

    return 0;
}