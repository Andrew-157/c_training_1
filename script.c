#include <stdio.h>

void editLine(char *line, int limit)
{
   int c, i;

   // Reading input line by line
   for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
      line[i] = c;

   if (c == '\n')
      line[i++] = '\n';

   line[i] = '\0'; // Null terminate the string at the current position

   // Trimming trailing spaces and tabs
   int j = i - 1;
   while (j >= 0 && (line[j] == ' ' || line[j] == '\t' || line[j] == '\n'))
   {
      line[j] = '\0'; // Replace trailing blanks/tabs with null character
      j--;
   }
}

int main()
{
   char line[100];
   printf("Enter a line: ");
   editLine(line, 100);
   printf("Edited line: '%s'\n", line);
   return 0;
}