## if...else Statement in C

The if-else statement in C is a **flow control statement** used for **decision-making** in the C program. It is one of the core concepts of C programming. It is an extension of the if in C that includes an `else block` along with the already existing `if block`.

The if-else statement is a decision-making statement that is used to decide whether the part of the code will be executed or not based on the specified condition (test expression). If the given condition is true, then the code inside the if block is executed, otherwise the code inside the else block is executed.

```c
if (condition) {
    // code to be executed if the condition is true
}
else {
    // code to be executed if the condition is false
}
```

```c
#include <stdio.h>

int main()
{

    if (5 < 10)
    {
        printf("5 is less than 10\n");
    }
    else
    {
        printf("5 is greater or equal to 10\n");
    }

    return 0;
}
```

Output
```
5 is less than 10
```

**NOTE**: *Any non-zero and non-null values are assumed to be true, and zero or null values are assumed to be false.*

## Examples of if-else Statement in C

1. C Program to check whether a given number is even or odd

```c
#include <stdio.h>

int main()
{

    int num = 9999998;

    if (num % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}
```

Output
```
The number is even
```

## C Program to check whether a person is eligible to vote or not.

```c
#include <stdio.h>

int main()
{

    int ages[] = {21, 18, 15, 88, 16, 54};
    int length = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < length; i++)
    {
        int currAge = ages[i];
        if (currAge < 18)
            printf("Person %d with age %d is not eligible to vote\n", i + 1, currAge);
        else
            printf("Person %d with age %d is eligible to vote\n", i + 1, currAge);
    }

    return 0;
}
```

Output
```
Person 1 with age 21 is eligible to vote
Person 2 with age 18 is eligible to vote
Person 3 with age 15 is not eligible to vote
Person 4 with age 88 is eligible to vote
Person 5 with age 16 is not eligible to vote
Person 6 with age 54 is eligible to vote
```

You may notice that in the second example, we did not enclose the body of the if and else statement in the braces and still the code is running without error. This is because the C language allows the skipping of the braces around the body of the if-else statement when there is only one statement in the body.

```c
#include <stdio.h>

int main()
{

    if (1)
        printf("The condition ");
        printf("is True");

    return 0;
}
```

```
gcc -Wall test.c
test.c: In function 'main':
test.c:6:5: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
     if (1)
     ^~
test.c:8:9: note: ...this statement, but the latter is misleadingly indented as if it is guarded by the 'if'
         printf("is True");
         ^~~~~~
```

## Advantages of if-else Statement

- The if-else statement enables the user to execute different statements based on different conditions.

- It can evaluate test expressions of type int, char, boolean, and more.

- It helps in modifying the flow of the program.

- It is simple, efficient, and easier to read when there is less number of conditions.

## Disadvantages of if-else Statement

- If there are a lot of if statements present, the code becomes unreadable and complex.

- It also becomes slower compared to the switch statement.