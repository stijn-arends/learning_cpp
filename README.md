# The C++ programming language
* * *

I am following the C++ tutorial made by **Caleb Curry** on [youtube](https://www.youtube.com/playlist?list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG) to try and learn the c++ programming language.

> Current video: #74


## Install
* * *

I installed c++, compilers and debuggers using the following [tutorial](https://code.visualstudio.com/docs/languages/cpp) from VSCode.

## Useful Resources
* * *

* The c++ core guide: [c++CoreGuide](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
* basic syntax: this [markdown](basics/basic_syntax.md) contains the basic syntax of c++
* Style format: 

If you want to distribute your program but don't want to share the source code you need to compile using the `-c` flag.

This will generate `.o` files which can not be read by humans but can be used to compile the original c++ code.

Example:
```bash
ls
math_stuff.cpp
math_utils.cpp
math_utils.h

g++ -c math_stuff.cpp math_utils.cpp

ls
math_stuff.cpp
math_stuff.o
math_utils.cpp
math_utls.o
math_utils.h

g++ math_stuff.o math_utils.o
```

This will produce an executable which is the same as if you were to use `g++ math_stuff.cpp math_utils.cpp`.

### Makefiles

In the makefile you first define the destination and then the source: `<destination>: <source>`. Below that you define how you get from the source to the destination.

Optionally you can also put a `clean` statement at the bottom.
This will run after everything is done.

Example:
```makefile
clean:
    rm *.o
```
> NOTE: only works on mac and linux as `rm` is not available on windows

An example of a makefile:

```makefile
CC = g++

math: math_stuff.o math_utils.o
	$(CC) math_stuff.o math_utils.o -o math

math_stuff.o: math_stuff.cpp
	$(CC) -c math_stuff.cpp

math_utils.o: math_utils.cpp
	$(CC) -c math_utils.cpp
```

you can run this file using the following command:

```bash
make --file makefile
```

> NOTE: in windows the make file is called: mingw32-make.exe. To make your life easier please rename this file to: make