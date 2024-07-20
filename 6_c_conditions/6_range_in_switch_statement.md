# Using Range in switch case in C

A range of numbers can be used instead of a single number or character in a case statement. Range in switch statement can be useful when we want to run the same set of statements for a range of numbers so that we do not have to write cases for each value separately.

- That is the case range extension of the GNU C compiler and not standard C.
- You can specify a range of consecutive values in a single case label.

The syntax for using range case is:

```c
case low ... high:
```

It can be used for a range of ASCII character codes like this:

```c
case 'A' ... 'Z':
```

**NOTE:** *Both lowest and highest values are included in range.*

Spaces should be included around the ellipses (`...`). For example:

```c
// Right: case 1 ... 5:
// Wrong: case 1...5:
```

```c
#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 15, 20};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLength; i++)
    {
        int currNum = arr[i];

        switch (currNum)
        {
        case 1 ... 6:
            printf("%d is in range from 1 to 6\n", currNum);
            break;
        case 19 ... 20:
            printf("%d is in range from 19 to 20\n", currNum);
            break;
        default:
            printf("Range not found for %d\n", currNum);
        }
    }
    return 0;
}
```

```bash
[admin@localhost ~] ./a.exe
1 is in range from 1 to 6
5 is in range from 1 to 6
Range not found for 15
20 is in range from 19 to 20
```

## Error conditions

- **low > high**: The compiler gives an error message.

```c
#include <stdio.h>

int main()
{

    int num = 1;

    switch (num)
    {
    case 3 ... 1:
        printf("ERROR");
    }

    return 0;
}
```

```bash
[admin@localhost ~] gcc -Wall ./test.c
.\test.c: In function 'main':
.\test.c:10:5: warning: empty range specified
     case 3 ... 1:
     ^~~~
PS D:\c_training_1> gcc -Wall .\test.c
.\test.c: In function 'main':
.\test.c:10:5: warning: empty range specified
     case 3 ... 1:
     ^~~~
```

- **Overlapping case values**: If the value of a case label is within a case range that has already been used in the switch statement, the compiler gives an error message.

```c
#include <stdio.h>

int main()
{

    int num = 1;

    switch (num)
    {
    case 1 ... 3:
        printf("First range");
    case 3 ... 6:
        printf("Second range");
    }

    return 0;
}
```

```bash
[admin@localhost ~] gcc -Wall test.c
.\test.c: In function 'main':
.\test.c:12:5: error: duplicate (or overlapping) case value
     case 3 ... 6:
     ^~~~
.\test.c:10:5: error: this is the first entry overlapping that value
     case 1 ... 3:
     ^~~~
```
