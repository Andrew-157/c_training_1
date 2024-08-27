#include <stdio.h>
#include <stdnoreturn.h>

noreturn void func()
{
    printf("Hello World\n");
}

int main()
{
    func();
}