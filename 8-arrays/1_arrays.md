# Arrays

An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.

## Array Declaration

In C, we have to declare the array like any other variable before using it. We can declare an array by specifying its name, the type of its elements, and the size of its dimensions. When we declare an array in C, the compiler allocates the memory block of the specified size to the array name.

Syntax of array declaration

```c
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];
```

, where `N` is the number of dimensions

The C arrays are static in nature, i.e., they are allocated memory at the compile time.

Example of array declaration:

```c
void main(void)
{
    // declaring array of integers
    int integerArray[5];
    // declaring array of chars
    char characterArray[5];
}
```

## Array Initialization

Initialization in C is the process to assign some initial value to the variable. When the array is declared or allocated memory, the elements of the array contain some garbage value. So, we need to initialize the array to some meaningful value. There are multiple ways in which we can initialize an array in C.

1. Array Initialization with Declaration

In this method, we initialize the array along with its declaration. We use an initializer list to initialize multiple elements of the array. An initializer list is the list of values enclosed within braces `{}` separated by a comma.

```c
data_type arrayName[N] = {value_1, value_2, ... value_N};
```

2. Array Initialization with Declaration without Size

If we initialize an array using an initializer list, we can skip declaring the size of the array as the compiler can automatically deduce the size of the array in these cases. The size of the array in these cases is equal to the number of elements present in the initializer list.

```c
data_type array_name[] = {1,2,3,4,5};
```

The size of the above array is 5 which is automatically deduced by the compiler.

3. Array Initialization after Declaration (Using Loops)

We initialize the array after the declaration by assigning the initial value to each element individually. We can use for loop, while loop, or do-while loop to assign the value to each element of the array.

```c
for (int i = 0; i < N; i++) {
    array_name[i] = value;
}
```

Example

```c
#include <stdio.h>

void printArray(int array[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
            printf("%d", array[i]);
        else
            printf("%d, ", array[i]);
    }
    printf(" }\n");
}

int main(void)
{
    int arraySize;

    printf("Choose the size of your array: ");
    scanf(" %d", &arraySize);

    int userArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter the integer value for the %d element of your array: ", i);
        int currArrElement;
        scanf("%d", &currArrElement);
        userArray[i] = currArrElement;
    }
    printf("Your array is: ");
    printArray(userArray, arraySize);
}
```

Output

```bash
Choose the size of your array: 5
Enter the integer value for the 0 element of your array: 33
Enter the integer value for the 1 element of your array: 88
Enter the integer value for the 2 element of your array: -61
Enter the integer value for the 3 element of your array: 49
Enter the integer value for the 4 element of your array: 0
Your array is: { 33, 88, -61, 49, 0 }
```

Example of all types of declaration + initialization:

```c
#include <stdio.h>

int main()
{
    // array initialization using initializer list
    int arr[5] = {10, 20, 30, 40, 50};

    // array initialization using initializer list without
    // specifying size
    int arr1[] = {1, 2, 3, 4, 5};

    // array initialization using for loop
    float arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = (float)i * 2.1;
    }
}
```

## Access Array Elements

We can access any element of an array in C using the array subscript operator `[]`  and the index value i of the element.

```c
array[index];
```

Example of Accessing  Array Elements using "Array Subscript Operator"

```c
#include <stdio.h>

int main(void)
{
    int myArray[5] = {33, 44, 55, 66, 88};

    for (int i = 0; i < 5; ++i)
    {
        printf("Array element %d is %d\n", i, myArray[i]);
    }
    return 0;
}
```

Output

```bash
Array element 0 is 33
Array element 1 is 44
Array element 2 is 55
Array element 3 is 66
Array element 4 is 88
```

## Update Array Element

We can update the value of an element at the given index `i` in a similar way to accessing an element by using the array subscript operator `[]` and assignment operator `=`.

```c
array[i] = new_value;
```

## Array Traversal

Traversal is the process in which we visit every element of the data structure. For C array traversal, we use loops to iterate through each element of the array.

```c
for (int i = 0; i < N; i++) {
    array_name[i];
}
```

## Types of Arrays in C

There are two types of arrays based on the number of dimensions. They are as follows:

1. One-Dimensional Arrays (1D Array)
2. Multi-Dimensional Arrays

## One-Dimensional Array in C

The One-dimensional arrays, also known as 1-D arrays in C are those arrays that have only one dimension.

Syntax

```c
array[size];
```

Example of 1D array

```c
#include <stdio.h>
#define arraySize 5

int main(void)
{
    // 1d array declaration
    int someArray[arraySize];

    // 1d array initialization using for-loop
    for (int i = 0; i < arraySize; i++)
    {
        someArray[i] = (i + 1) * 100;
    }

    // 1d array traversal using while loop
    int j = 0;
    while (j < arraySize)
    {
        printf("Current element %d is %d\n", j, someArray[j]);
        j++;
    }
}
```

Output

```bash
Current element 0 is 100
Current element 1 is 200
Current element 2 is 300
Current element 3 is 400
Current element 4 is 500
```

### Array of Characters - String

In C, we store the words, i.e., a sequence of characters in the form of an array of characters terminated by a NULL character(`\0`). These are called strings in C language.

```c
#include <stdio.h>

int main(void)
{
    char myString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", myString);

    return 0;
}
```

```bash
Hello
```

OR

```c
#include <stdio.h>

int main(void)
{
    char myString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    int i = 0;

    while (myString[i])
    {
        printf("%c", myString[i++]);
    }
    printf("\n");
    return 0;
}
```

Output

```bash
Hello
```

**NOTE:**

```c
#include <stdio.h>

int main(void)
{
    char null = '\0';
    if (!null)
    {
        printf("\\0 is nothing\n");
    }

    return 0;
}
```

Output

```bash
\0 is nothing
```

## Multidimensional Array in C

Multidimensional Arrays in C are those arrays that have more than one dimension. Some of the popular multidimensional arrays are 2D arrays and 3D arrays. We can declare arrays with more dimensions than 3d arrays but they are avoided as they get very complex and occupy a large amount of space.

### Two-Dimensional Array in C

A Two-Dimensional array or 2D array in C is an array that has exactly two dimensions. They can be visualized in the form of rows and columns organized in a two-dimensional plane.

Syntax

```c
array[size1][size2];
```

Here,

- `size1` is the size of the first dimension
- `size2` is the size of the second dimension
