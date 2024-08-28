# C Library `math.h` Functions

The math.h header defines various C mathematical functions and one macro. All the functions available in this library take double as an argument and return double as the result.

## double ceil (double x)

The C library function double ceil (double x) returns the smallest integer value greater than or equal to x.

Syntax

```c
double ceil (double x);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{

    float var1, var2, var3, var4;

    var1 = 1.6;
    var2 = 1.2;
    var3 = -2.8;
    var4 = -2.3;

    printf("%.1lf, %.1lf, %.1lf, %.1lf", ceil(var1),
           ceil(var2), ceil(var3), ceil(var4));

    return 0;
}
```

Output

```bash
2.0, 2.0, -2.0, -2.0
```

## double floor (double x)

The C library function double floor(double x) returns the largest integer value less than or equal to x.

Syntax

```c
double floor(double x);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{

    float var1, var2, var3, var4;

    var1 = 1.6;
    var2 = 1.2;
    var3 = -2.8;
    var4 = -2.3;

    printf("%.1lf, %.1lf, %.1lf, %.1lf", floor(var1),
           floor(var2), floor(var3), floor(var4));

    return 0;
}
```

Output

```bash
1.0, 1.0, -3.0, -3.0
```

## double fabs(double x)

The C library function double fabs(double x) returns the absolute value of x.

Syntax

```c
double fabs(double x);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{

    float var1, var2, var3, var4;

    var1 = 1.6;
    var2 = 1.2;
    var3 = -2.8;
    var4 = -2.3;

    printf("%.1lf, %.1lf, %.1lf, %.1lf", fabs(var1),
           fabs(var2), fabs(var3), fabs(var4));

    return 0;
}
```

Output

```bash
1.6, 1.2, 2.8, 2.3
```

## double log(double x)

The C library function double log(double x) returns the natural logarithm (base-e logarithm) of x.

Syntax

```c
double log(double x);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{

    double x = 2.7, res;

    res = log(x);

    printf("log(%lf) = %lf\n", x, res);

    return 0;
}
```

Output

```bash
log(2.700000) = 0.993252
```

## double log10(double x)

The C library function double log10(double x) returns the common logarithm (base-10 logarithm) of x.

Syntax

```c
double log10(double x);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{

    double x = 10000, res;

    res = log10(x);

    printf("log10(%lf) = %lf\n", x, res);

    return 0;
}
```

```bash
log10(10000.000000) = 4.000000
```

## double fmod(double x, double y)

The C library function double fmod(double x, double y) returns the remainder of x divided by y.

Syntax

```c
double fmod(double x, double y);
```

```c
#include <math.h>
#include <stdio.h>

int main(void)
{
    double x = 5, y = 2, remainder;
    remainder = fmod(x, y);

    printf("double remainder: %lf\n", remainder);
}
```

Output

```bash
double remainder: 1.000000
```

## double sqrt(double x)

The C library function double sqrt(double x) returns the square root of x.

Syntax

```c
double sqrt(double x);
```

```c
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
    if (n == 1)
        return false;
    // Using sqrt to find if the number is prime
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (fmod(n, i) == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int num;
    while (true)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (isPrime(num) == true)
            printf("%d is prime\n", num);
        else
            printf("%d is not prime\n", num);
    }
}
```

Output

```bash
Enter an integer: 49
49 is not prime
Enter an integer: 9
9 is not prime
Enter an integer: 23
23 is prime
```

## double pow(double x, double y)

The C library function double pow(double x, double y) returns x raised to the power of y i.e. x^y.

Syntax

```c
double pow(double x, double y);
```

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("%lf ^ %d = %lf\n", 8.0, 3, pow(8, 3));
    return 0;
}
```

Output

```bash
8.000000 ^ 3 = 512.000000
```