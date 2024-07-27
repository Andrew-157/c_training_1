# `goto` Statement in C

The C goto statement is a jump statement which is sometimes also referred to as an unconditional jump statement. The goto statement can be used to jump from anywhere to anywhere within a function.

Syntax

```c
Syntax1      |   Syntax2
----------------------------
goto label;  |    label:  
.            |    .
.            |    .
.            |    .
label:       |    goto label;
```

In the above syntax, the first line tells the compiler to go to or jump to the statement marked as a label. Here, the label is a user-defined identifier that indicates the target statement. The statement immediately followed after `label:` is the destination statement. The `label:` can also appear before the `goto label;` statement in the above syntax.

## Example 1

In this case, we will see a situation similar to as shown in Syntax1 above. Suppose we need to write a program where we need to check if a number is even or not and print accordingly using the goto statement. The below program explains how to do this.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int integer = 26;

    if ((integer & 1) == 0)
    {
        goto whenEven;
    }
    else
    {
        goto whenOdd;
    }
whenEven:
    printf("Integer is even\n");
    exit(0); // Without exiting the program would print both "Integer is even\n" and "Integer is odd\n"
whenOdd:
    printf("Integer is odd\n");

    return 0;
}
```

Output

```bash
Integer is even
```

## Example 2

In this case, we will see a situation similar to as shown in Syntax2 above. Suppose we need to write a program that prints numbers from 1 to 10 using the goto statement. The below program explains how to do this.

```c
#include <stdio.h>

int main()
{

    int i = 1;
something:
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        goto something;
    }

    return 0;
}
```

Output

```bash
1 2 3 4 5 6 7 8 9 10
```

**NOTE**: *The use of `goto` is discouraged as it makes the program harder to read and analyze.*
