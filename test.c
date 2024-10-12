#include <stdio.h>
#include <string.h>

#define MAXLINE 50

/*
 * Example from "C programming laguage" book
 */

int getLine(char line[], int lim);
void copy(char to[], char from[]);

int main()
{

    int max = 0;
    int currLen = 0;
    char currLine[MAXLINE];
    char longest[MAXLINE];

    while ((currLen = getLine(currLine, MAXLINE)) != 0)
    {
        if (currLen > max)
        {
            max = currLen;
            strcpy(longest, currLine);
        }
    }

    if (max > 0)
    {
        printf("\nThe longest line has length of: %d\n", max);
        printf("The longest line is: %s", longest);
        if (longest[max - 1] != '\n')
            printf("\n");
    }
}

int getLine(char line[], int lim)
{

    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}
