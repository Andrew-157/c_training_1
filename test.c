#include <math.h>
#include <stdio.h>

int main()
{
    double x, ret;
    x = 0.5;

    ret = tanh(x);
    printf("The hyperbolic tangent of %lf is %lf degrees",
           x, ret);

    return (0);
}