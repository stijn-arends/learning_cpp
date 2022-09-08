# The C++ programming language
* * *

I am following the C++ tutorial made by **Caleb Curry** on [youtube](https://www.youtube.com/playlist?list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG) to try and learn the c++ programming language.

> Current video: #100


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

### OOP

#### Struct vs class
**structs** are mostly used to store only variables. There are also called plain old data structs (PODS).
**classes** are mostly used to store variables and methods.

#### Operator overloading
Just like in python we can change the operator 'dunder' methods like __add__ and __equals__. An example of this is inside the [operator_overloading.cpp](advanced/object_oriented_programming/operator_overloading/operator_overloading.cpp) file.



## What to study after this series:
* Learn more about object oriented programming
	* Get familiar with things like `virtual` or `friend`
	* How to use classes in multiple files
	* Multiple inheritance
* Learn more about other `collections`
* Learn how to properly debug code
* Learn how to test c++ code
	* [video](https://www.youtube.com/watch?v=H6x53F5Do24&t=176s) (short) introduction to unit testing using acutest
	* A [blogpost](https://medium.com/dsckiit/a-guide-to-using-catch2-for-unit-testing-in-c-f0f5450d05fb) about unit test using catch2. 
		* [tutorial](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md) Catch2
* pointers and dynamic memory
* templetized classes
	* [video](https://www.youtube.com/watch?v=mQqzP9EWu58) introduction to class templates
	* They are basically used to get rid of duplicate code
* Command line arguments in c++
	* [basic(Geeks4Geeks)](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/) tutorial
	* CLI framwork [Robust Services Core (RSC)](https://www.codeproject.com/Articles/5269493/A-Command-Line-Interface-CLI-Framework)
	