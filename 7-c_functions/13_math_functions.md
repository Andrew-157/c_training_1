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

## double modf(double x, double *integer)

The C library function double modf(double x, double *integer) returns the fraction component (part after the decimal), and sets integer to the integer component.

Syntax

```c
double modf(double x, double *integer);
```

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double x, fractpart, integer;

    x = 8.56474;
    fractpart = modf(x, &integer);
    printf("Integer part: %d\n", (int)integer);
    printf("Fraction part: %lf\n", fractpart);
    return 0;
}
```

Output

```bash
Integer part: 8
Fraction part: 0.564740
```

## double exp(double x)

The C library function double exp(double x) returns the value of e raised to the xth power.

Syntax

```c
double exp(double x);
```

```c
double x = 0; 
  
    printf("The exponential value of %lf is %lf\n", x, 
           exp(x)); 
    printf("The exponential value of %lf is %lf\n", x + 1, 
           exp(x + 1)); 
    printf("The exponential value of %lf is %lf\n", x + 2, 
           exp(x + 2)); 
  
    return (0); 
```

```bash
The exponential value of 0.000000 is 1.000000
The exponential value of 1.000000 is 2.718282
The exponential value of 2.000000 is 7.389056
```

## double cos(double x)

The C library function double cos(double x) returns the cosine of a radian angle x.

Syntax

```c
double cos(double x)
```

The same syntax can be used for other trigonometric functions like sin, tan, etc.

```c
#include <math.h>
#include <stdio.h>

#define Pi 3.14159265

double calculateCosine(double angle)
{
    double val = Pi / 180;
    return cos(angle * val);
}

int main()
{
    double angles[2] = {60.0, 90.0};

    for (int i = 0; i < 2; i++)
    {
        double currAngle = angles[i];
        printf("The cosine of %lf is %lf\n", currAngle, calculateCosine(currAngle));
    }

    return (0);
}
```

Output

```bash
The cosine of 60.000000 is 0.500000
The cosine of 90.000000 is 0.000000
```

## double acos(double x)

The C library function double acos(double x) returns the arc cosine of x in radians.

Syntax

```c
double acos(double x);
```

The same syntax can be used for other arc trigonometric functions like asin, atan etc.

```c
#include <math.h> 
#include <stdio.h> 
  
#define PI 3.14159265 
  
int main() 
{ 
    double x, ret, val; 
  
    x = 0.9; 
    val = 180.0 / PI; 
  
    ret = acos(x) * val; 
    printf("The arc cosine of %lf is %lf degrees", x, ret); 
  
    return (0); 
}
```

Output

```bash
The arc cosine of 0.900000 is 25.841933 degrees
```

## double tanh(double x)

The C library function double tanh(double x) returns the hyperbolic tangent of x.

Syntax

```c
double tanh(double x);
```

The same syntax can be used for other hyperbolic trigonometric functions like sinh, cosh etc.

```c
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
```

```bash
The hyperbolic tangent of 0.500000 is 0.462117 degrees
```
