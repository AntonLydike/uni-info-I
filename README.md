# Informatics I
Assignments from course "Informatics I" at uni Augbsurg (WS17/18)

## Structure

**Examples** will be added regularly from digicampus. The structure is self
explanatory.

**Assignments** are organized like this: `assignments/<number>/<taskName>.c`.
If the task has separate subtasks, the subtasks are organized in folders, eg.
`assignments/1/2/a.c` contains the code for assignment 1, task 2, subtask a.

Anything of value covered in a **lecture** can be found inside
`lectures/<lectureDate>`.

## Setup

I am using atom with the following c-related packages (I'll try to keep this
list curated):

 - `atom-beautify` configured for C, using uncrustify with `uncrustify-linux.cfg`
    as configuration. This helps to automatically follow the given coding
    conventions ([Linux kernel style](https://www.kernel.org/doc/Documentation/process/coding-style.rst)).

I also wrote a small script to compile and run the code. This is how to use it:

 - `./run-c <filename.c> [args...]` compile `<filename.c>` with the required flags
    (-Wall -Wextra -ansi -pedantic) and the run it. Everything after `<filename.c>`
    will be passed on to the program as arguments.
 - `./run-c <filename.c> --output|-o <output> [--run|-r args...]` compile with
    the flags above. Only run it, if `--run` or `-r` is specified. All arguments
    after the `run` flag are passed onto the program.

Examples:

 - `./run-c examples/1/bsp01.c` compile and run the first example.
 - `./run-c examples/1/bsp01.c --arg1 arg2 345` compile the first example, the
    run it and pass `--arg1 arg2 345` to it.
 - `./run-c examples/1/bsp01.c -o program.out` compile the first example to
    `program.out`.
 - `./run-c examples/1/bsp01.c -o program.out -r` compile the first example to
    `program.out` and run it.
 - `./run-c examples/1/bsp01.c -o program.out --arg1 --arg2` compile the first
    example to `program.out`. It won't be run and the arguments will be ignored.

And for hand-ins I created a small script that copys all the code in a folder
and it's subfolders, orders it and then outputs it to a single markdown or html
file (if conversion is possible through [`grip`](https://github.com/joeyespo/grip)).
To run it just type `./concat-assignments assignments/<number>` to compile a
complete list of all code written for an assignment.


## Assignments

Here I'll try to add a few comments for assignment as I see fit.

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
