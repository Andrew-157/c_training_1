#include <stdio.h>

int main()
{
    int a = 5;
    int b = 5;
    printf("Pre-Incrementing a = %d\n", ++a);      // 6
    printf("Post-Incrementing b = %d\n", b++);     // 5
    printf("Post-Incrementing final b = %d\n", b); // 6
    return 0;
}