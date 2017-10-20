# Informatics I
Assignments from course "Informatics I" at uni Augbsurg.

## setup

I am using atom with the following c-related packages (I'll try to keep this
list curated):

 - `atom-beautify` configured for C, using uncrustify with `uncrustify-linux.cfg`
    as configuration. This helps to automatically follow the given coding
    conventions ([Linux kernel style](https://www.kernel.org/doc/Documentation/process/coding-style.rst)).

I also wrote a small script to compile and run the code. This is how to use it:

 - `./run-c <filename.c>` compile `<filename.c>` with the required flags
    (-Wall -Wextra -ansi -pedantic) and the run it. Run arguments aren't (yet)
    supported. The program is deleted after it completed.
 - `./run-c <filename.c> --output <output>` compile with the flags above but
    don't run it.

## Assignments

Here I'll try to add a few comments for each assignment.

### 0

 - `addOrMultiply.c` Clean source code. Ran `atom-beautify`, added curly
    brackets for else back in and moved the declaration for int a inside to
    keep variables inside their respective scopes.

## Examples

### 1

 - `bsp01.c` calculates the greatest common divisor.
 - `bsp01b.c` is a slightly more mangled version of the normal one. And the
    parameters have changed. it now finds the GCD of 80 and 42 (which is 2).
    (Instead of 30 and 42, which would be 6).
 - `bsp02.c` outputs the number of arguments received, then the name of the
    binary (or better the command with which it was called) and finally the
    number of characters the name has.
 - `bsp03.c` prompts the user for a number, then outputs that number.
