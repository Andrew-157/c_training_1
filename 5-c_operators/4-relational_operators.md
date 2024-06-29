## Relational Operators in C

In C, relational operators are the symbols that are used for comparison between two values to understand the type of relationship a pair of numbers shares. The result that we get after the relational operation is a boolean value, that tells whether the comparison is true or false. Relational operators are mainly used in conditional statements and loops to check the conditions in C programming.

## Types of Relational Operators in C

There are a total of 6 relational operators in C language. 

## Equal to operator `==`

The C equal to operator `==` is a relational operator that is used to check if two operands are equal.

- **Equal to** operator is a binary operator hence it requires two operands to perform the comparison.

- If the two values are equal it returns true. Else, it returns false.

- It does not work for strings or arrays.

```c
operand1 == operand2
```

## Not equal to operator `!=`

The C not equal to operator `!=` is a relational operator that is used to check if two operands are not equal.

- It is a binary operator.

- It is the exact boolean complement of **equal to** operator `==` - it returns true if two values are not equal, else it returns false.

```c
operand1 != operand2
```

## Greater than operator `>`

The greater than operator is a relational operator in C that checks whether the first operand is greater than the second operand or not.

- It is a binary operator.

- If the first operand is greater than the second, it returns true. Otherwise, false.

- This operator is used to make decisions or create conditions based on the relative magnitude of two values.

```c
operand1 > operand2
```

## Less than operator `<`

The less than operator is a relational operator in C that checks whether the first operand is lesser than the second operand.

- It is a binary operator.

- If the first operand is less than the second, it returns true. Else, false.

- This operator is used to make decisions or create conditions based on the relative magnitude of two values.

```c
operand1 < operand2
```

**NOTE**: *The greater than and less than operator are not equal to the complement of each other.*

## Greater than or equal to operator `>=`

The greater than or equal to the operator is a relational operator in C that checks whether the first operand is greater than or equal to the second operand.

- It is a binary operator.

- If the first operand is greater than or equal to the second operand, it returns true. Else, false.

```c
operand1 >= operand2
```

## Less than or equal to

The less than or equal to the operator is a relational operator in C that checks whether the first operand is less than or equal to the second operand.

- It is a binary operator.

- If the first operand is less to or equal to the second operand, it returns true. Else, false.

```c
operand1 <= operand2
```

```c
#include <stdio.h> 
  
int main() 
{ 
    int a = 10, b = 4; 
  
    // greater than example 
    if (a > b) 
        printf("a is greater than b\n"); 
    else
        printf("a is less than or equal to b\n"); 
  
    // greater than equal to 
    if (a >= b) 
        printf("a is greater than or equal to b\n"); 
    else
        printf("a is lesser than b\n"); 
  
    // less than example 
    if (a < b) 
        printf("a is less than b\n"); 
    else
        printf("a is greater than or equal to b\n"); 
  
    // lesser than equal to 
    if (a <= b) 
        printf("a is lesser than or equal to b\n"); 
    else
        printf("a is greater than b\n"); 
  
    // equal to 
    if (a == b) 
        printf("a is equal to b\n"); 
    else
        printf("a and b are not equal\n"); 
  
    // not equal to 
    if (a != b) 
        printf("a is not equal to b\n"); 
    else
        printf("a is equal b\n"); 
  
    return 0; 
}
```

Output
```bash
a is greater than b
a is greater than or equal to b
a is greater than or equal to b
a is greater than b
a and b are not equal
a is not equal to b
```