# Simple Shell Project



# Description:

In this project, i recreated a mini shell with its basic functions (such as 'ls' for example)

## What is Simple Shell?
The shell is the Linux command line interpreter. It provides an interface between the user and the kernel and executes programs called commands. For example, if a user enters `ls` then the shell executes the `ls` command.

Here is an example of a basic use:

       pl119394:simple_shell_v2 macbook$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
       pl119394:simple_shell_v2 macbook$ ./hsh
       $ /bin/ls
       _getenv.c       _which.c        def_env.c       execute_cmd.c   hsh
       interactive.c   main.c no_interact.c   parse_input.c   shell.h
       $

The objective of this project would be to get the same result by using `ls` without the `/bin/ls`.
## Compilation line
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
then:

    ./hsh

## Requirements

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   Your shell should not have any memory leaks
-   No more than 5 functions per file
-   All your header files should be include guarded
-   Use system calls only when you need to ([why?](https://intranet.hbtn.io/rltoken/rp53OodD6JzhS5Cv4DHkxQ "why?"))

## List of allowed functions and system calls+
-   all functions from string.h
-   `access` (man 2 access)
-   `chdir` (man 2 chdir)
-   `close` (man 2 close)
-   `closedir` (man 3 closedir)
-   `execve` (man 2 execve)
-   `exit` (man 3 exit)
-   `_exit` (man 2 _exit)
-   `fflush` (man 3 fflush)
-   `fork` (man 2 fork)
-   `free` (man 3 free)
-   `getcwd` (man 3 getcwd)
-   `getline` (man 3 getline)
-   `getpid` (man 2 getpid)
-   `isatty` (man 3 isatty)
-   `kill` (man 2 kill)
-   `malloc` (man 3 malloc)
-   `open` (man 2 open)
-   `opendir` (man 3 opendir)
-   `perror` (man 3 perror)
-   `printf` (man 3 printf)
-   `fprintf` (man 3 fprintf)
-   `vfprintf` (man 3 vfprintf)
-   `sprintf` (man 3 sprintf)
-   `putchar` (man 3 putchar)
-   `read` (man 2 read)
-   `readdir` (man 3 readdir)
-   `signal` (man 2 signal)
-   `stat` (__xstat) (man 2 stat)
-   `lstat` (__lxstat) (man 2 lstat)
-   `fstat` (__fxstat) (man 2 fstat)
-   `strtok` (man 3 strtok)
-   `wait` (man 2 wait)
-   `waitpid` (man 2 waitpid)
-   `wait3` (man 2 wait3)
-   `wait4` (man 2 wait4)
-   `write` (man 2 write)

## How does it work?

<a href="https://ibb.co/RSm5fgJ"><img src="https://i.ibb.co/6Zxdzyq/Blank-diagram.png" alt="Blank-diagram" border="0" /></a>


## Examples of interactive and non-interactive:

***Your shell works like this***

 **in interactive mode:**
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($) exit
$
```
**in non-interactive mode:**
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
```

## Man page

    man ./man_1_simple_shell

## What the function returns
The function returns an exit status

## Check for memory leaks

    valgrind ./hsh

## Author of this project
Léo Cheneviere Jestin--> https://github.com/lchenevi.

