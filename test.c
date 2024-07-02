#include <stdio.h>

// driver code
int main()
{
    char a[50];
    printf("Enter a word: ");
    scanf("%s", &a);
    printf("Entered word: %s\n", a);

    char b[50];
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", b);
    printf("Entered sentence: %s", b);

    return 0;
}