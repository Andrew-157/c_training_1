# Nested Functions in C

Some programmer thinks that defining a function inside an another function is known as “nested function”. But the reality is that it is not a nested function, it is treated as lexical scoping. Lexical scoping is not valid in C because the compiler cant reach/find the correct memory location of the inner function.

Nested function is not supported by C because we cannot define a function within another function in C. We can declare a function inside a function, but it’s not a nested function.
Because nested functions definitions can not access local variables of the surrounding blocks, they can access only global variables of the containing module. This is done so that lookup of global variables doesn’t have to go through the directory. As in C, there are two nested scopes: local and global (and beyond this, built-ins). Therefore, nested functions have only a limited use. If we try to approach nested function in C, then we will get compile time error.

**NOTE:** *Some compilers may allow nested functions though. However, standard C does not support them.*
