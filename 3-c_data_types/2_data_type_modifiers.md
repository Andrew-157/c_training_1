## Data Type Modifiers in C

In C, data type modifiers are used to modify the length or size of data that various data types hold such as int, char, and double as per the requirements. By using these data type modifiers we can precisely utilize the computer memory.

Primary Uses of Data Type Modifiers:
- To modify the size of the data type
- To modify the sign of the data type

## Types of Modifiers

In C, we have 4 data type modifiers that are used to modify data types. They are used as prefixed to the basic data types. For example, unsigned int.

1. short
2. long
3. signed
4. unsigned

**Note:** *These modifiers cannot be used with a float data type.*

## 'short' Data Type Modifier

The short modifier works with integer data type. It decreases the size of the int to 2 bytes along with the range that decreases to -32,768 to 32,767.

```c
#include <stdio.h> 
  
int main() 
{ 
  
    int a; 
    // Modify the int using short 
    short int b; 
  
    // Print the size of a. 
    printf("Size of a: %d", sizeof(a)); 
  
    // Print the size of b. 
    printf("\nSize of b: %hd", sizeof(b)); 
  
    return 0; 
}
```

Output
```bash
Size of a: 4
Size of b: 2
```

## 'long' Type Modifier

The long data type modifier is used to increase the size of a int or double data type by two times that also increases the range of these data types. For example, if int take 4 bytes of space it will take 8 bytes of space after using long with int.

Data Types with 'long':

- long int
- long long int
- long double

```c
#include <stdio.h> 
  
int main() 
{ 
    // defining variables with long 
    int num; 
    long int long_num; 
    long long int long_long_num; 
  
    double dub_num; 
    long double long_dub_num; 
  
    printf("Size of num: %d", sizeof(num)); 
    printf("\nSize of long_num: %d", sizeof(long_num)); 
    printf("\nSize of long_long_num: %d", 
           sizeof(long_long_num)); 
    printf("\nSize of dub_num: %d", sizeof(dub_num)); 
    printf("\nSize of long_dub_num: %d", 
           sizeof(long_dub_num)); 
  
    return 0; 
}
```

Output may depend on the Compiler

## 'unsigned' Type Modifier

We can store positive and negative values in integer data type but many times we don’t need to store the negatives values therefore the size reserved for negative range is wasted. We can utilize that space to store positive values using ‘unsigned’ data type modifier.

```c
#include <stdio.h> 
  
int main() 
{ 
  
    int num1 = 4294967295; 
    unsigned int num2 = 4294967295; 
  
    printf("num1: %d", num1); 
    printf("\nnum2: %u", num2); 
  
    return 0; 
}
```

Output 
```bash
num1: -1
num2: 4294967295
```

## 'signed' Type Modifier

It is default modifier of int and char data type if no modifier is specified. It indicates that we can store both negative and positive values.

```c
#include <stdio.h> 
  
int main() 
{ 
  
    int num1 = 248; 
    signed int num2 = 23124; 
  
    printf("size of num1: %d", sizeof(num1)); 
    printf("\nsize of num2: %u", sizeof(num2)); 
  
    return 0; 
}
```

Output
```bash
size of num1: 4
size of num2: 4
```