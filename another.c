#include <stdio.h>

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i];
        printf("res is %d\n", res);
    }
    return res;
}

int main()
{

    printf("%d\n", 1 & 0);
    return 0;
}