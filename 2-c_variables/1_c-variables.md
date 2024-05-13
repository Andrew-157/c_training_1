## C Variables

A variable in C language is the name associated with some memory location to store data of different types. There are many types of variables in C depending on the scope, storage class, lifetime, type of data they store, etc. A variable is the basic building block of a C program that can be used in expressions as a substitute in place of the value it stores.

They can be viewed as the names given to the memory location so that we can refer to it without having to memorize the memory address. The size of the variable depends upon the data type it stores.

## C Variable Syntax

The syntax to declare a variable in C specifies the name and the type of the variable.

```c
data_type variable_name = value;    // defining single variable

    // or

data_type variable_name_1, variable_name_2; // defining multiple variables

```

## Declaration -> Definition -> Initialization

**Take a closer look at that topic in the future**

## Rules for naming variables in C

You can assign any name to the variable as long as it follows the following rules:

1. A variable name must only contain alphabets, digits, and underscore.

2. A variable name must start with an alphabet or an underscore only. It cannot start with a digit.

3. No whitespace is allowed within the variable name.

4. A variable name must not be any reserved word or keyword.

## Types of C Variables

1. Local Variables

A Local variable in C is a variable that is declared inside a function or a block of code. Its scope is limited to the block or function in which it is declared.

```c
#include <stdio.h>

void function() { 
    int x = 10;
    printf("X: %d", x);    
}

int main() { function(); return 0;}
```
In the above code, x can be used only in the scope of function(). Using it in the main function will give an error.

2. Global Variables in C

A Global variable in C is a variable that is declared outside the function or a block of code. Its scope is the whole program i.e. we can access the global variable anywhere in the C program after it is declared.

```c
#include <stdio>

int X = 5;

int main() { printf("X: %d", X); return 0;}
```

**Note:** *When we have same name for local and global variable, local variable will be given preference over the global variable by the compiler.*

3. Static Variables in C

A static variable in C is a variable that is defined using the static keyword. It can be defined only once in a C program and its scope depends upon the region where it is declared (can be global or local).

The default value of static variables is zero.

As its lifetime is till the end of the program, it can retain its value for multiple function calls as shown in the example.

```c
// C program to demonstrate use of static variable
#include <stdio.h>

void function()
{
	int x = 20; // local variable
	static int y = 30; // static variable
	x = x + 10;
	y = y + 10;
	printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}

int main()
{
	printf("First Call\n");
	function();
	printf("Second Call\n");
	function();
	printf("Third Call\n");
	function();
	return 0;
}

```

Output: 
```
First Call
    Local: 30
    Static: 40
Second Call
    Local: 30
    Static: 50
Third Call
    Local: 30
    Static: 60
```

In the above example, we can see that the local variable will always print the same value whenever the function will be called whereas the static variable will print the incremented value in each function call.

4. Automatic Variable

All the local variables are automatic variables by default. They are also known as auto variables.

Their scope is local and their lifetime is till the end of the block. If we need, we can use the auto keyword to define the auto variables.

The default value of the auto variables is a garbage value.

```c
#include <stdio.h>
 
void function()
{
    int x = 10; // local variable (also automatic)
    auto int y = 20; // automatic variable
    printf("Auto Variable: %d", y);
}
int main()
{
 
    function();
    return 0;
}
```

In the above example, both x and y are automatic variables. The only difference is that variable y is explicitly declared with the auto keyword.

5. External Variables

```c
extern int external_variable;
```

```c
----------myfile.h------------
extern int x=10;  //external variable (also global)

----------program1.c----------
#include "myfile.h"
#include <stdio.h>
void printValue(){
printf("Global variable: %d", x);
}

```

In the above example, x is an external variable that is used in multiple C files.

6. Register Variables

Register variables in C are those variables that are stored in the CPU register instead of the conventional storage place like RAM. Their scope is local and exists till the end of the block or a function.

These variables are declared using the **register** keyword.

The default value of register variables is a garbage value.

```c
register int register_value = 5;
```

```c
#include <stdio.h>
 
int main()
{
    //    register variable
    register int var = 22;
 
    printf("Value of Register Variable: %d\n", var);
    return 0;
}
```

**NOTE:** *We cannot get the address of the register variable using addressof (&) operator because they are stored in the CPU register. The compiler will throw an error if we try to get the address of register variable.*

## Constants

Till now we have only seen the variables whose values can be modified any number of times. But C language also provides us a way to make the value of a variable immutable. We can do that by defining the variable as constant.

A constant variable in C is a read-only variable whose value cannot be modified once it is defined. We can declare a constant variable using the const keyword.

```c
const int myConst = 545;
```

**Note:** *We have to always initialize the const variable at the definition as we cannot modify its value after defining.*