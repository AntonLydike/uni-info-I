# uni-info-I
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
