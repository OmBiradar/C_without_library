# C without Libraries

Just a hobby project where I try to write C code without using the standard libraries, using my own built libraries instead.

## Setup

To setup and run this project, follow these steps:

1. Compile mylib.c as a shared library
```bash
gcc -fPIC -shared -o mylib.so mylib.c
```
`-fPIC`: Generates position-independent code for use in shared libraries.
`-shared`: Indicates creation of a shared object (dynamic library).

2. Compile your program by linking the shared library
```bash
gcc -o main main.c -L. -lmylib
```

3. Run the program by specifing the location of the shared library
```bash
LD_LIBRARY_PATH=. ./main
```

## Files

### mylib.c

Currently this is a c file which is to be converted into a shared library.

It contains common functions like `print` and `scan` which are replacements for `printf` and `scanf`.

I would increase the scope of this file in the future.


### main.c

This is just a C file used as a demonstration file.
