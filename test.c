#include <stdio.h>

int main(void)
{

    int view()
    {
        printf("Inner view function\n");
        return 0;
    }

    view();

    return 0;
}