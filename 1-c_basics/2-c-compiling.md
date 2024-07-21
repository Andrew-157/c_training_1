## Compiling of C Program

The compilation is the process of converting the source code of the C language into machine code. As C is a mid-level language, it needs a compiler to convert it into an executable code so that the program can be run on our machine.

![Compiling in C](./images/Compilation-Process-in-C.png "a title")

Files created during the compilation process:

- `*.i` - Preprocessed file
- `*.s` - Assembly code
- `*.o` - Object code
- `*.exe` - Executable file

## Steps of Compiling

1. Pre-Processing

    This is the first phase through which source code is passed. This phase includes:
        - Removal of Comments
        - Expansion of Macros
        - Expansion of the included files
        - Conditional compilation

    The preprocessed output is stored in the filename.i .

2. Compiling

    The next step is to compile filename.i and produce an intermediate compiled output file filename.s. This file is in assembly-level instructions, which the assembler can understand.

3. Assembling

    In this phase the filename.s is taken as input and turned into filename.o by the assembler. This file contains machine-level instructions. At this phase, only existing code is converted into machine language, and the function calls like printf() are not resolved.

4. Linking

    This is the final phase in which all the linking of function calls with their definitions is done. Linker knows where all these functions are implemented. Linker does some extra work also, it adds some extra code to our program which is required when the program starts and ends. For example, there is a code that is required for setting up the environment like passing command line arguments. This task can be easily verified by using $size filename.o and $size filename. Through these commands, we know how the output file increases from an object file to an executable file. This is because of the extra code that Linker adds to our program. 