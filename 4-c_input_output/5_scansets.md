## Scansets in C

scanf family functions support scanset specifiers which are represented by %[]. Inside scanset, we can specify single character or range of characters. While processing scanset, scanf will process only those characters which are part of scanset. We can define scanset by putting characters inside square brackets. Please note that the scansets are case-sensitive.

We can also use scanset by providing comma in between the characters you want to add.

example: `scanf("%s[A-Z,_,a,b,c]s",str);`

This will scan all the specified characters in the scanset.

```c
#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    printf("Enter a string: ");
    scanf("%[A-Z]s", str);
 
    printf("You entered: %s\n", str);
 
    return 0;
}
```

**NOTE:** *Notice that `scanf("%[A-Z]s", str)` does not use `&` operator for `str`, this is due to the fact that `str` and `&str` both indicate address of the array(address of the first element of the array, to be exact), and there is no need for ampersand, unlike, for example, in integer `var` is the value and `&var` is the address. You can use `scanf` with or without `&` when scanning character arrays - strings, however, there is really no point in using ampersand for scanning strings.* 

Output
```
Enter a string: HELLOworld
You entered: HELLO
```

Output(another input)
```bash
Enter a string: AbC
You entered: A
```

If first character of scanset is `^`, then the specifier will stop reading after first occurrence of that character. For example, given below scanset will read all characters but stops after first occurrence of 'o'

```c
#include <stdio.h>

int main(void)
{
    char str[128];

    printf("Enter a string: ");
    scanf("%[^o]s", str);

    printf("You entered: %s\n", str);

    return 0;
}
```

Output
```
Enter a string: Night is Yours
You entered: Night is Y
```

Another example for reading string with spaces using `scanf`:
```c
#include <stdio.h>

int main()
{

    char str[50];
    printf("Enter a string with spaces: ");
    scanf("%[^\n]s", str);

    printf("String you entered: %s", str);

    return 0;
}
```

Output
```
Enter a string with spaces: Hello World!
String you entered: Hello World!
```

Some more examples:

```c
#include <stdio.h>

int main()
{

    char str[50];
    printf("Enter a string: ");
    scanf("%[H,F,O,h,f,o]s", str);

    printf("String you entered: %s", str);

    return 0;
}
```

Output
```
Enter a string: HoFoOOOhfffeeedd
String you entered: HoFoOOOhfff
```

```c
#include <stdio.h>

int main()
{

    char str[50];
    printf("Enter a string: ");
    scanf("%[A-Z,n,e,d,!, ]s", str); // "%[A-Z,n,e,d,! ]" would give the same result

    printf("String you entered: %s", str);

    return 0;
}
```

Output
```
Enter a string: I need POWER!
String you entered: I need POWER!
```