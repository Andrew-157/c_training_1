## Integer Promotions in C

Some data types like char , short int take less number of bytes than int, these data types are automatically promoted to int or unsigned int when an operation is performed on them. This is called integer promotion. For example no arithmetic calculation happens on smaller types like char, short and enum. They are first converted to int or unsigned int, and then arithmetic is done on them. If an int can represent all values of the original type, the value is converted to an int . Otherwise, it is converted to an unsigned int. 

```c
#include <stdio.h>

int main()
{
    char a = 30, b = 40, c = 10;
    char d = (a * b) / c;

    printf("%d", d);
    return 0;
}
```

Output
```
120
```

At first look, the expression (a*b)/c seems to cause arithmetic overflow because signed characters can have values only from -128 to 127 (in most of the C compilers), and the value of subexpression ‘(a*b)’ is 1200 which is greater than 128. But integer promotion happens here in arithmetic done on char types and we get the appropriate result without any overflow. 

```c
#include <stdio.h>

int main()
{
    char a = 0xfb;
    unsigned char b = 0xfb;

    printf("a = %c", a);
    printf("\nb = %c", b);

    if (a == b)
        printf("\nSame");
    else
        printf("\nNot Same");
    return 0;
}
```

Output
```c
a = ?
b = ?
Not Same 
```

When we print ‘a’ and ‘b’, same character is printed, but when we compare them, we get the output as “Not Same”. ‘a’ and ‘b’ have same binary representation as char. But when comparison operation is performed on ‘a’ and ‘b’, they are first converted to int. ‘a’ is a signed char, when it is converted to int, its value becomes -5 (signed value of 0xfb). ‘b’ is unsigned char, when it is converted to int, its value becomes 251. The values -5 and 251 have different representations as int, so we get the output as “Not Same”. 