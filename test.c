// #include <stdio.h>

// int main()
// {
//     int a = 25, b = 5;

//     printf("a & b is %d\n", a & b);
//     printf("a | b is %d\n", a | b);

//     return 0;
// }

#include <stdio.h>

int main()
{
    unsigned int a = 25, b = 5;

    printf("a & b is %d\n", a & b); // 1
    /*25 in binary is 11001 and 5 is 101(or 00101 for convenience),
    so when we perform Bitwise AND, we get 00001 or 1 in decimal form*/
    printf("%d\n", 0b00001); // 1

    printf("a | b is %d\n", a | b); // 29
    /*25 in binary is 11001 and 5 is 101(or 00101 for convenience),
    so when we perform Bitwise OR, we get 11101 or 29 in decimal form*/
    printf("%d\n", 0b11101); // 29

    printf("a ^ b is %d\n", a ^ b); // 28
    /*25 in binary is 11001 and 5 is 101(or 00101 for convenience),
    so when we perform Bitwise XOR, we get 11100 or 28 in decimal*/
    printf("%d\n", 0b11100); // 28

    printf("~a is %d\n", ~a); // -26
    return 0;
}