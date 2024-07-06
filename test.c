#include <stdio.h>

int sumOf(int a, int b)
{
    return a + b;
}

void printSum(int sum)
{
    printf("The sum is %d\n", sum);
    return;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = sumOf(num1, num2);
    printSum(sum);
    return 0;
}