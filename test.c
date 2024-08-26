#include <stdarg.h>
#include <stdio.h>

int largestNumber(int n, ...)
{

    va_list ptr;

    va_start(ptr, n);

    int largest = va_arg(ptr, int);

    for (int i = 0; i < n - 1; i++)
    {
        int temp = va_arg(ptr, int);
        largest = temp > largest ? temp : largest;
    }

    va_end(ptr);

    return largest;
}

int main(void)
{

    printf("The largest number out of (123, 99, 7, 50, 608) is %d\n", largestNumber(5, 123, 99, 7, 50, 608));

    return 0;
}