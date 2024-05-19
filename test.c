#include <stdio.h>

int main()
{
    {
        int x = 10, y = 20;
        {
            printf("X: %d Y: %d\n", x, y);
            {
                int y = 40;
                x++;
                y++;
                printf("X: %d Y: %d\n", x, y);
            }
            printf("X: %d Y: %d\n", x, y);
        }
    }
    return 0;
}