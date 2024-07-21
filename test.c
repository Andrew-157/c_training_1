#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}