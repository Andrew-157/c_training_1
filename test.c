// C program to show input and output

#include <stdio.h>

int main()
{

    // Declare the variables
    int num;
    char ch;
    float f;

    // --- Integer ---

    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);

    // Output the integer
    printf("Entered integer is: %d\n", num);

    // --- Float ---

    // For input Clearing buffer
    while ((getchar()) != '\n')
        ;

    // Input the float
    printf("\nEnter the float: ");
    scanf("%f", &f);

    // Output the float
    printf("Entered float is: %f\n", f);

    // --- Character ---

    // Input the Character
    printf("\nEnter the Character: ");
    scanf(" %c", &ch);

    // Output the Character
    printf("Entered character is: %c", ch);

    return 0;
}