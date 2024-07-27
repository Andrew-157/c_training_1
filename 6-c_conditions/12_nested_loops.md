# Nested Loops in C

A nested loop means a loop statement inside another loop statement. That is why nested loops are also called "loop inside loops". We can define any number of loops inside another loop.

## Nested for Loop

Nested for loop refers to any type of loop that is defined inside a 'for' loop.

**Example**: Below program uses a nested for loop to print a 3D matrix of 2x3x2.

```c
#include <stdio.h>

int main()
{

    int arr[2][3][2] = {{{0, 6}, {1, 7}, {2, 8}},
                        {{3, 9}, {4, 10}, {5, 11}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
```

Output

```bash
arr[0][0][0] = 0
arr[0][0][1] = 6
arr[0][1][0] = 1
arr[0][1][1] = 7
arr[0][2][0] = 2
arr[0][2][1] = 8
arr[1][0][0] = 3
arr[1][0][1] = 9
arr[1][1][0] = 4
arr[1][1][1] = 10
arr[1][2][0] = 5
arr[1][2][1] = 11
```

## Nested while loop

A nested while loop refers to any type of loop that is defined inside a 'while' loop.

**Example**: Print Pattern using nested while loops

```c
#include <stdio.h>

int main()
{

    int end = 5;

    printf("Pattern printing using nested while loops");

    int i = 1, j = 1;

    while (i <= end)
    {
        printf("\n");
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        i++;
    }

    return 0;
}
```

Output

```bash
Pattern printing using nested while loops
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

## Nested do...while loop

A nested do-while loop refers to any type of loop that is defined inside a 'do-while' loop.

**NOTE:**: *There is no rule that a loop must be nested inside its own type. In fact, there can be any type of loop nested inside any type and to any level.*

```c
do{

   while(condition) {
      
      for ( initialization; condition; increment ) {
      
         // statement of inside for loop
      }

      // statement of inside while loop
   }

   // statement of outer do-while loop
}while(condition);
```

## `break` inside nested loops

Whenever we use a break statement inside the nested loops it breaks the innermost loop and program control is inside the outer loop.

```c
#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // This inner loop will break when i==3
            if (i == 3)
            {
                break;
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

Output

```bash
* * *
* * *
* * *

* * *
```

## `continue` inside nested loops

Whenever we use a continue statement inside the nested loops it skips the iteration of the innermost loop only. The outer loop remains unaffected.

```c
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
```

Output

```bash
0 1
0 1
0 1
0 1
0 1
```
