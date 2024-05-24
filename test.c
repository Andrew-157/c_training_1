#include <stdio.h>

int main()
{

    char sentence[50];

    printf("Enter a Sentence: ");
    scanf("%[^\n]s", &sentence);
    printf("Sentence you entered is: %s", sentence);
}