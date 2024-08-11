# `main` Function in C

The `main` function in C is the entry point of a program where the execution of a program starts. It is a user-defined function that is mandatory for the execution of a program because when a C program is executed, the operating system starts executing the statements in the `main()` function.

```c
return_type main() {
    // Statement 1
    // Statement 2
    // Statement n
    return;
}
```

We can write `main` function in many ways in C:

- `int main(){}`

- `int main(void){}`

- `main(){}`

- `void main(){}`

- `main(void){}`

- `void main(void){}`

## Important Points about C main Function

- It is the function where the program’s execution starts.

- Every program has exactly one main function.

- The name of this function should be "main" not anything else.

- The main function always returns an integer value or void.

- The main function is called by OS, not the user.

## Types of C `main` Functions

1. `main` function with no arguments and `void` return type

2. `main` function with no arguments and `int` return type

3. `main` function with the command-line arguments

## `main` function with no arguments and `void` return type

```c
void main(void) {
    // Statements
}
```

The above is equivalent to

```c
void main() {
    // Statements
}
```

```c
#include <stdio.h>

void main()
{
    printf("Hello World!\n");
}
```

Output

```bash
Hello World!
```

**NOTE:** *The return type of main function according to C standard should be int only. Even if your compiler is able to run `void main()`, it is recommended to avoid it.*

```c
[admin@localhost ~] gcc -Wall ./test.c
.\test.c:3:6: warning: return type of 'main' is not 'int' [-Wmain]
 void main()
      ^~~~
```

## `main` function with no arguments and `int` return type

```c
int main() {
    // Function Body
}
```

OR

```c
int main(void) {
    // Function Body
}
```

```c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    return 137;
}
```

Output

```bash
Hello World!
```

```bash
[admin@localhost ~] echo $?
137
```

## `main` function with the command-line arguments

The first argument `argc` means argument count which means it stores the number of arguments passed in the command line and by default, its value is 1 when no argument is passed.

The second argument is a char pointer array `argv[]` which stores all the command line arguments passed. We can also see in the output when we run the program without passing any command line argument the value of argc is 1.

Syntax

```c
int main(int argc, char* argv[]){
    // Function Body
}
```

```c
#include <stdio.h>

int main(int argc, char *argv[])
{

    for (int i = 1; i < argc; i++)
    {
        printf("Command-Line Argument %d. %s\n", i, argv[i]);
    }
}
```

Output

```bash
[admin@localhost ~] .\a.exe Took off from the red place in the sky
Command-Line Argument 1. Took
Command-Line Argument 2. off
Command-Line Argument 3. from
Command-Line Argument 4. the
Command-Line Argument 5. red
Command-Line Argument 6. place
Command-Line Argument 7. in
Command-Line Argument 8. the
Command-Line Argument 9. sky
```

**NOTE:** *`argv[0]` stores the name of the compiled binary file.*

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The name of the compiled binary file is: %s\n", argv[0]);
}
```

Output

```c
root@localhost:~# gcc -Wall test.c -o myFile.out
root@localhost:~# ./myFile.out
The name of the compiled binary file is: ./myFile.out
```

You can also do the following

```c
#include <stdio.h>

int main(int argc)
{
    printf("%d", argc);
}
```

Output

```bash
[admin@localhost ~] gcc -Wall .\test.c
.\test.c:3:5: warning: 'main' takes only zero or two arguments [-Wmain]
 int main(int argc)
     ^~~~
[admin@localhost ~] .\a.exe
1
[admin@localhost ~]> .\a.exe 2
2
```

But you cannot do the following

```c
#include <stdio.h>

int main(char *argv[])
{
    printf("%c\n", argv[0]);
}
```

Output

```bash
[admin@localhost ~] gcc -Wall .\test.c
.\test.c:3:5: warning: first argument of 'main' should be 'int' [-Wmain]
 int main(char *argv[])
     ^~~~
.\test.c:3:5: warning: 'main' takes only zero or two arguments [-Wmain]
.\test.c: In function 'main':
.\test.c:5:14: warning: format '%c' expects argument of type 'int', but argument 2 has type 'char *' [-Wformat=]
     printf("%c\n", argv[0]);
              ^
```
