## Useful Tips for working with C

1. Giving name to the output executable

    If you want to give a name for the executable during the compiling with gcc, do the following:
    ```c
    gcc -o helloworld hello_world.c
    ```
    This would generate `helloworld.exe` file.

    You can also change the order a bit:
    ```c
    gcc hello_world.c -o helloworld
    ```

    This would result in the same as before

2. Options for the gcc compiler

    - `-Wall` - enables all compiler’s warning messages
    - `-o` - used to specify the output file name
    - `-save-temps` - creates all intermediate files along with the executable in the current directory
