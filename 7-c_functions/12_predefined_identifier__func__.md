# Predefined Identifier `__func__` in C

Before we start discussing `__func__`, let us write some code snippets and anticipate the output:

```c
#include <stdio.h>

int main() {
   printf("I am running in function: %s\n", __func__);
}
```

```bash
I am running in function: main
```

C language standard (i.e. C99 and C11) defines a predefined identifier as follows in clause 6.4.2.2:

"The identifier `__func__` shall be implicitly declared by the translator as if, immediately following the opening brace of each function definition, the declaration:

```c
static const char __func__[] = "function-name";
```

appeared, where "function-name" is the name of the lexically-enclosing function."

It means that the C compiler implicitly adds __func__ in every function so that it can be used in that function to get the function name.

```c
#include <stdio.h>


void foo(void) {printf("I am function: %s\n", __func__);}
void bar(void) {printf("I am function: %s\n", __func__);}


int main(void) {
   foo();
   bar();
   return 0;
}
```

```bash
I am function: foo
I am function: bar
```

A use case of this predefined identifier could be logging the output of a big program where a programmer can use `__func__` to get the current function instead of mentioning the complete function name explicitly.

Now, what happens if we define one more variable of name `__func__`?

```c
#include <stdio.h>

int __func__ = 30;

int main() {
  printf("%s\n", __func__);
}
```

```bash
root@12f36b833da6:~# gcc -Wall test.c
test.c:3:5: error: expected identifier or '(' before '__func__'
    3 | int __func__ = 30;
      |     ^~~~~~~~
```

Since the C standard says the compiler implicitly defines `__func__` for each function as the function name, we should not define `__func__` in the first place. You might get an error but the C standard says "undefined behavior" if someone explicitly defines `__func__`.

Just to finish the discussion on Predefined Identifier `__func__`, let us mention Predefined Macros as well (such as `__FILE__` and `__LINE__`, etc.) Basically, C standard clause 6.10.8 mentions several predefined macros out of which `__FILE__` and `__LINE__` are of relevance here.

```c
1 #include <stdio.h>
2 
3 int main() {
4   printf("In file: %s on line: %d in function: %s\n", __FILE__, __LINE__, __func__);
5 }
```

```bash
In file: test.c on line: 4 in function: main
```
