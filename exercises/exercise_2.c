#include <stdio.h>

#define SIZE_OF_INTEREST 10
#define NUMBER_OF_LINES_OF_INTEREST 5
#define MAX_SIZE 25


/*
 *  Exercise 1-17 from "C Programming Language Book", but with few differences:
 *    - the program prints characters longer than 25 characters, not 80 (For easier testing, but this can be easily changed)
 *    - the program doesn't print all lines that are longer than specified number of character, it prints only last 5
 */

int getLine(char line[], int lim);
void copy(char to[], char from[]); // `strcpy` from `string.h` could be used instead
void append(char stringsArray[][MAX_SIZE], int arraySize, char lastElement[]); // Kinda like python's append method of list, but this one doesn't grow the size of the array

int main() {    
    int currLen;
    char currLine[MAX_SIZE];
    int counter = 0;
    char linesOfInterest[NUMBER_OF_LINES_OF_INTEREST][MAX_SIZE];

    while ((currLen = getLine(currLine, MAX_SIZE)) > 0) {
        if (currLen > SIZE_OF_INTEREST) {
            if (counter == 5) { // if counter reaches 5, it means that we should move all strings in the array one to the left, 
// and add new one at the end
               append(linesOfInterest, NUMBER_OF_LINES_OF_INTEREST, currLine);
            }
            else {
                copy(linesOfInterest[counter++], currLine);
            }
        }
    }
    
    if (counter > 0)
       printf("\nPrinting last %d lines that are longer than %d characters:\n", counter, SIZE_OF_INTEREST);
    // The following loop can be part of the above `if`, but the result is the same
    for (int i = 0; i < counter; i++) {
       printf("%s", linesOfInterest[i]);
       // Finding the length of the string using for-loop, to find whether last character before `\0` is `\n`
       int j, currChar;
       for (j = 0; (currChar = linesOfInterest[i][j]) != '\0'; j++);
       if (linesOfInterest[i][j-1] != '\n') // `j` has stopped at index of `\0` in the loop above 
          printf("\n");  
    }
}


int getLine(char line[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
     if (c == '\n')
       line[i++] = '\n';
     line[i] = '\0';
     return i;
}


void copy(char to[], char from[]) {
   int i = 0;
   while ((to[i] = from[i]) != '\0')
      i++;
}

// Moves all characters in an array of strings one element to the left, and adds one at the end
void append(char stringsArray[][MAX_SIZE], int arraySize, char lastElement[]) {   
    for (int i = 1; i < arraySize; i++) {
        copy(stringsArray[i-1], stringsArray[i]);
    }
    copy(stringsArray[arraySize-1], lastElement);
}
