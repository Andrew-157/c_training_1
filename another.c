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

    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]); // this is how you find length of an array by the way
    printf("The odd occurring element is %d\n",
           findOdd(arr, n));
    return 0;
}