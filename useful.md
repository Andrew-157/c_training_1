## Useful Tips for working with C

1. Giving name to the output executable

    If you want to give a name for the executable during the compiling with gcc, do the following:
    ```c
    gcc -o helloworld hello_world.c
    ```
    This would generate `helloworld.exe` file.

    You can also change the order a bit:
    ```c
    gcc hello_world.c -o helloworld
    ```

    This would result in the same as before

2. Options for the gcc compiler

    - `-Wall` - enables all compiler’s warning messages
    - `-o` - used to specify the output file name
    - `-save-temps` - creates all intermediate files along with the executable in the current directory

3. How to link files using **gcc**

For example, you have 2 files: *file1.c*, *file2.c*

**file1.c**:
```c
#include <stdio.h>

extern int a;

int main()
{
    printf("%d\n", a);
    return 0;
}
```

**file2.c**
```c

int a = 33;
```

Using *extern* keyword, file1.c uses variable **a**. To be able to use that variable from file2.c in file1.c, you need to link those files:

1. Generate object files:

```bash
gcc -c file1.c file2.c
```

The following files will be generated in the current directory: file1.o, file2.o

To link those object files into one executable, run the following:

```bash
gcc -W file1.o file2.o 
```

This will generate executable in the current directory.

4. How to do the same as in **3** without using extern

You can use `#include "file2.c"` preprocessor directive in file1.c instead of using extern.

file1.c
```c
#include <stdio.h>
#include "file2.c" // provide path to file2.c if it is not in the same directory as file1.c

int main()
{
    printf("%d\n", a);
    return 0;
}
```

file2.c

```c
int a = 33;
```

Now you can just run:
```bash
gcc file1.c
```

5. Convert int to char, char to int
```c
#include <stdio.h>

int main()
{

    int a = 74;      // in hexadecimal: 0x4a, in octal: 0112, in binary: 0b1001010
    printf("%c", a); // J

    printf("\n");

    char b = 'J';
    printf("%d", b); // 74

    printf("\n");

    char *c = "\112"; // in hexadecimal: \x4a, in octal: \112
    printf("%s", c);  // J

    return 0;
}
```

6. `getchar()`

```c
#include <stdio.h>

int main()
{

    while (getchar() != '\n');
}
```

Just run it

7. I am not sure if it is in any way useful, but here it is:

```c
#include <stdio.h>

int main(void)
{

    int a, b;

    scanf("%d--%d", &a, &b);

    printf("A: %d, B: %d", a, b);

    return 0;
}
```

Output
```
1--2
A: 1, B: 2
```

8. Interesting Behavior

```c
#include <stdio.h>

int main()
{

    int a = 25;

    printf("%d\n", a++); // 25
    printf("%d\n", a);   // 26

    printf("%d\n", a--); // 26
    printf("%d\n", a);   // 25

    return 0;
}
```

Output
```
25
26
26
25
```