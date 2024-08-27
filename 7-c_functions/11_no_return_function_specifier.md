# `_No_return` Function Specifier

The `_No_return` keyword appears in a function declaration and specifies that the function does not return by executing the return statement or by reaching the end of the function body. If the function declared `_No_return` returns, the behavior is undefined. A compiler diagnostic is recommended if this can be detected.

The `_No_return` specifier may appear more than once in the same function declaration, the behavior is the same as if it appeared once.

This specifier is typically used through the convenience macro `noreturn`, which is provided in the header `stdnoreturn.h`.

**NOTE:** *`_Noreturn` function specifier is deprecated. [[noreturn]] attribute should be used instead.
The macro `noreturn` is also deprecated.*

```c
#include <stdio.h>
#include <stdnoreturn.h>

noreturn void func()
{
    return;
}

int main()
{
    func();
}
```

```bash
root@12f36b833da6:/# gcc -Wall test.c
test.c: In function 'func':
test.c:6:3: warning: function declared 'noreturn' has a 'return' statement
    6 |   return;
      |   ^~~~~~
test.c:6:3: warning: 'noreturn' function does return
    6 |   return;
      |
root@12f36b833da6:/# ./a.out
Segmentation fault
```

OR using `_Noreturn`

```c
#include <stdio.h>
#include <stdnoreturn.h>


_Noreturn void func() {
  return;
}


int main() {
   func();
}
```

```bash
root@12f36b833da6:/# gcc -Wall test.c
test.c: In function 'func':
test.c:6:3: warning: function declared 'noreturn' has a 'return' statement
    6 |   return;
      |   ^~~~~~
test.c:6:3: warning: 'noreturn' function does return
    6 |   return;
      |   ^
root@12f36b833da6:/# ./a.out
Segmentation fault
```

Now the example without `return`

```c
#include <stdio.h>
#include <stdnoreturn.h>


_Noreturn void func() {
  printf("Hello Wolrd\n");
}


int main() {
   func();
}
```

```bash
root@12f36b833da6:/# gcc -Wall test.c
test.c: In function 'func':
test.c:7:1: warning: 'noreturn' function does return
    7 | }
      | ^
root@12f36b833da6:/# ./a.out
Hello Wolrd
Segmentation fault
```

OR using `noreturn`

```c
#include <stdio.h>
#include <stdnoreturn.h>


noreturn void func() {
  printf("Hello Wolrd\n");
}


int main() {
   func();
}
```

```bash
root@12f36b833da6:/# gcc -Wall test.c
test.c: In function 'func':
test.c:7:1: warning: 'noreturn' function does return
    7 | }
      | ^
root@12f36b833da6:/# ./a.out
Hello Wolrd
Segmentation fault
```
