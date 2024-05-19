## Internal Linkage and External Linkage in C

Terms "identifier" and "name" are used interchangeably in the following text.

Definitions:

- **Scope:** Scope of an identifier is the part of the program where the identifier may directly be accessible. In C all identifiers are statically (or lexically) scoped

- **Linkage:** Linkage describes how names can or cannot refer to the same entity throughout the whole program or single Translation Unit.
The above sounds similar to Scope, but it is not so. To understand what the above means, let us dig deeper into the compilation process.

- **Translation Unit:** A translation unit is a file containing source code, header files and other dependencies. All of these sources are grouped together to form a single translation unit which can then be used by the compiler to produce one single executable object. It is important to link the sources together in a meaningful way. For example, the compiler should know that printf definition lies in stdio header file.

In C and C++, a program that consists of multiple source code files is compiled one at a time. Until the compilation process, a variable can be described by it’s scope. It is only when the linking process starts, that linkage property comes into play. Thus, scope is a property handled by compiler, whereas linkage is a property handled by linker.

The Linker links the resources together in the linking stage of compilation process. The Linker is a program that takes multiple machine code files as input, and produces an executable object code. It resolves symbols (i.e, fetches definition of symbols such as “+” etc..) and arranges objects in address space.

Linkage is a property that describes how variables should be linked by the linker. Should a variable be available for another file to use? Should a variable be used only in the file declared? Both are decided by linkage.
Linkage thus allows you to couple names together on a per file basis, scope determines visibility of those names.

## 1. Internal Linkage

An identifier implementing internal linkage is not accessible outside the translation unit it is declared in. Any identifier within the unit can access an identifier having internal linkage. It is implemented by the keyword static. An internally linked identifier is stored in initialized or uninitialized segment of RAM. (note: static also has a meaning in reference to scope, but that is not discussed here).

**Take a closer look at this topic later when you understand what is Translation Unit**

## 2. External Linkage

An identifier implementing external linkage is visible to every translation unit. Externally linked identifiers are shared between translation units and are considered to be located at the outermost level of the program. In practice, this means that you must define an identifier in a place which is visible to all, such that it has only one visible definition. It is the default linkage for globally scoped variables and functions.

**Take a closer look at this topic later when you understand what is Translation Unit**