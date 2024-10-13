#include <stdio.h>

void reverse(char *, int);


int main() {
 
   char string[13] = "Hello World!";
   printf("String: %s\n", string);
   reverse(string, 13);
   printf("Reversed string: %s\n", string);
}


void reverse(char string[], int stringSize) {
   int i;
   for (i = 0; i < (stringSize / 2); i++ ) {
      char swapChar = string[i];
      int swapIndex = stringSize - i - 2;
      string[i] = string[swapIndex];
      string[swapIndex] = swapChar;
   }
   string[stringSize-1] = '\0';
}
