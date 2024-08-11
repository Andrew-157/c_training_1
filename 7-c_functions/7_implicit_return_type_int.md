# Implicit return type `int` in C

```c
#include <stdio.h>

func(int x)
{
    return x * x;
}

int main()
{
    printf("%d\n", func(10));
}
```

Output

```bash
100
```

If the return type is not explicitly specified, a compiler assumes the implicit return type is `int`.
