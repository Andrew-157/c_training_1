# for versus while in C

**Question**: *Is there any example for which the following two loops will not work the same way?*

```c
/*Program 1 --> For loop*/
for (<init - stmnt>;<boolean - expr>;<incr - stmnt>) {
<body-statements>
}

/*Program 2 --> While loop*/
<init - stmnt>;
while (<boolean - expr>) {
<body-statements> 
<incr-stmnt>
}
```

Solution: If the body-statements contains continue, then the two programs will work in different ways. See the below examples: Program 1 will print "loop" 4 times but Program 2 will go in an infinite loop.

Example using for loop:

```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("Loop\n");
    }
}
```

Output

```bash
Loop
Loop
Loop
Loop
```

Example using the while loop

```c
#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 5)
    {
        if (i == 2)
        {
            continue;
        }
        printf("Loop\n");
        i++;
    }
}
```

Output

```bash
Loop
Loop
// Program just hangs here
```
