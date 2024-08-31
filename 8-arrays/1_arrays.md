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


```c
#include <stdbool.h>
#include <stdio.h>

int a;
int b;

void printTwoDimensionalArray(int array[a][b])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    a = 2, b = 4;
    int two_d_array[2][4] = {10, 20, 30, 40, 50, 60, 70, 80}; 
    printTwoDimensionalArray(two_d_array);

    return 0;
}
```

Output

```bash
10 20 30 40
50 60 70 80
```

**NOTE:** *During compilation of the above program with `-Wall` option, you will get the following warning:*

```bash
test.c: In function 'main':
test.c:22:29: warning: missing braces around initializer [-Wmissing-braces]
   22 |     int two_d_array[2][4] = {10, 20, 30, 40, 50, 60, 70, 80};
      |                             ^
      |                              {             } {             }
```

*to have this program compiled without warnings, you can use the syntax presented in the following example:*

```c
#include <stdbool.h>
#include <stdio.h>

int a;
int b;

void printTwoDimensionalArray(int array[a][b])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    a = 2, b = 4;
    int two_d_array[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};
    printTwoDimensionalArray(two_d_array);

    return 0;
}
```

Output

```bash
10 20 30 40
50 60 70 80
```

### Three-Dimensional Array in C

Another popular form of a multi-dimensional array is Three Dimensional Array or 3D Array. A 3D array has exactly three dimensions. It can be visualized as a collection of 2D arrays stacked on top of each other to create the third dimension.

Syntax

```c
array[size_1][size_2][size_3];
```

```c
#include <stdio.h>

int main()
{

    int three_d_array[3][3][2] = {{{22, 33}, {44, 55}, {66, 77}},
                                  {{88, 99}, {111, 222}, {333, 444}},
                                  {{555, 666}, {777, 888}, {999, 1111}}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int y = 0; y < 2; y++)
            {
                printf("%d ", three_d_array[i][j][y]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
```

Output

```bash
22 33
44 55
66 77

88 99
111 222
333 444

555 666
777 888
999 1111

```

## Relationship between Arrays and Pointers

Come back to this when you understand pointers

## Passing an Array to a Function in C

Come back to this when you understand pointers

## Return an Array from a Function in C

Come back to this when you understand pointers

## Properties of Arrays in C

1. Fixed Size

The array in C is a fixed-size collection of elements. The size of the array must be known at the compile time and it cannot be changed once it is declared.

2. Homogeneous Collection

We can only store one type of element in an array. There is no restriction on the number of elements but the type of all of these elements must be the same.

3. Indexing in Array

The array index always starts with 0 in C language. It means that the index of the first element of the array will be 0 and the last element will be arraySize – 1.

4. Dimensions of an Array

A dimension of an array is the number of indexes required to refer to an element in the array. It is the number of directions in which you can grow the array size.

5. Contiguous Storage

All the elements in the array are stored continuously one after another in the memory. It is one of the defining properties of the array in C which is also the reason why random access is possible in the array.

6. Random Access

The array in C provides random access to its element i.e we can get to a random element at any index of the array in constant time complexity just by using its index number.

7. No Index Out of Bounds Checking

There is no index out-of-bounds checking in C/C++, for example, the following program compiles fine but may produce unexpected output when run.

```c
#include <stdio.h>

int main()
{
    int arr[2];

    printf("%d ", arr[3]);
    printf("%d ", arr[-2]);

    return 0;
}
```

In C, it is not a compiler error to initialize an array with more elements than the specified size. For example, the below program compiles fine and shows just a Warning.

```c
#include <stdio.h>

int main()
{

    int array[3] = {1, 2, 3, 4};

    return 0;
}
```

```bash
test.c: In function 'main':
test.c:6:30: warning: excess elements in array initializer
    6 |     int array[3] = {1, 2, 3, 4};
      |                              ^
# Warning about unused variable is omitted
```

## Examples of arrays in C

Example 1: C Program to perform array input and output.

```c
#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf(" %d", &arr[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```

Output

```bash
Enter the 0 element of the array: 1
Enter the 1 element of the array: 2
Enter the 2 element of the array: 3
Enter the 3 element of the array: 4
Enter the 4 element of the array: 5
The array is: 1 2 3 4 5
```

Example 2: C Program to print the average of the given list of numbers

```c
#include <stdio.h>

float calculateAverage(float *arr, int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int main()
{

    float arr[5] = {33, 44, 789, 10234, 56011};
    float size = sizeof(arr) / sizeof(arr[0]);

    printf("The array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.0f ", arr[i]);
    }
    printf("\n");

    printf("The average is %.1f\n", calculateAverage(arr, size));
}
```

Output

```bash
The array is: 33 44 789 10234 56011
The average is 13422.2
```

Example 3: C Program to find the largest number in the array

```c
#include <stdio.h>

int findLargest(int *arr, int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        if (curr > largest)
        {
            largest = curr;
        }
    }
    return largest;
}

int main()
{
    int arr[10] = {135, 165, 1, 16, 511, 65, 654, 654, 169, 4};
    printf("The largest number in the array is %d\n", findLargest(arr, 10));
}
```


Output

```bash
The largest number in the array is 654
```

## Advantages of the Arrays in C

1. Random and fast access of elements using the array index.
2. Use of fewer lines of code as it creates a single array of multiple elements.
3. Traversal through the array becomes easy using a single loop.
4. Sorting becomes easy as it can be accomplished by writing fewer lines of code.

## Disadvantages of the Arrays in C

1. Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.

2. Insertion and deletion of elements can be costly since the elements are needed to be rearranged after insertion and deletion.
