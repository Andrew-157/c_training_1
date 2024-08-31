#include <stdio.h>

int findLargest(int *arr, int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        if (curr > largest)
        {
            largest = curr;
        }
    }
    return largest;
}

int main()
{
    int arr[10] = {135, 165, 1, 16, 511, 65, 654, 654, 169, 4};
    printf("The largest number in the array is %d\n", findLargest(arr, 10));
}