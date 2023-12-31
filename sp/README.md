#   Simple Shell

##  Description
Simple Shell is a project to be done in teams of 2 people at ALX SE aimed at writing a simple, custom UNIX shell.
its role is to imitate sh and provide an interface between the user and the machine by executing commands.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

##  General
*  Who designed and implemented the original Unix operating system
*  Who wrote the first version of the UNIX shell
*  Who invented the B programming language (the direct predecessor to the C programming language)
*  Who is Ken Thompson
*  How does a shell work
*  What is a pid and a ppid
*  How to manipulate the environment of the current process
*  What is the difference between a function and a system call
*  How to create processes
*  What are the three prototypes of main
*  How does the shell use the PATH to find the programs
*  How to execute another program with the execve system call
*  How to suspend the execution of a process until one of its children terminates
*  What is EOF / “end-of-file”?

##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   All your files should end with a new line.
*   A `README.md` file, at the root of the folder of the project is mandatory.
*   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
*   Your shell should not have any memory leaks.
*   No more than 5 functions per file.
*   All your header files should be include guarded.
*   Use system calls only when you need to (why?).
*   Write a `README` with the description of your project.
*   You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository. Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS).

##  List of allowed functions and system calls
*   `access` (man 2 access)
*   `chdir` (man 2 chdir)
*   `close` (man 2 close)
*   `closedir` (man 3 closedir)
*   `execve` (man 2 execve)
*   `exit` (man 3 exit)
*   `_exit` (man 2 _exit)
*   `fflush` (man 3 fflush)
*   `fork` (man 2 fork)
*   `free` (man 3 free)
*   `getcwd` (man 3 getcwd)
*   `getline` (man 3 getline)
*   `getpid` (man 2 getpid)
*   `isatty` (man 3 isatty)
*   `kill` (man 2 kill)
*   `malloc` (man 3 malloc)
*   `open` (man 2 open)
*   `opendir` (man 3 opendir)
*   `perror` (man 3 perror)
*   `read` (man 2 read)
*   `readdir` (man 3 readdir)
*   `signal` (man 2 signal)
*   `stat` (__xstat) (man 2 stat)
*   `lstat` (__lxstat) (man 2 lstat)
*   `fstat` (__fxstat) (man 2 fstat)
*   `strtok` (man 3 strtok)
*   `wait` (man 2 wait)
*   `waitpid` (man 2 waitpid)
*   `wait3` (man 2 wait3)
*   `wait4` (man 2 wait4)
*   `write` (man 2 write)

### Compilation

Your shell will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

```

#  Tasks

**0. Betty would be proud**

Write a beautiful code that passes the Betty checks.

**1. Simple shell 0.1**

Write a UNIX command line interpreter.

*   Usage: `simple_shell`

Your Shell should:
*   Display a prompt and wait for the user to type a command. A command line always ends with a new line.
*   The prompt is displayed again each time a command has been executed.
*   The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
*   The command lines are made only of one word. No arguments will be passed to programs.
*   If an executable cannot be found, print an error message and display the prompt again.
*   Handle errors.
*   You have to handle the “end of file” condition (`Ctrl+D`)

You don’t have to:
*   Use the `PATH`
*   Implement built-ins
*   Handle special characters : ", ', `, \\, *, &, #
*   Be able to move the cursor
*   Handle commands with arguments


**2. Simple shell 0.2**

Simple shell 0.1 +
*   Handle command lines with arguments.



**3. Simple shell 0.3**

Simple shell 0.2 +
*   Handle the `PATH`.
*   `fork` must not be called if the command doesn’t exist.


**4. Simple shell 0.4**

Simple shell 0.3 +
*   Implement the `exit` built-in, that exits the shell.
*   Usage: `exit`.
*   You don’t have to handle any argument to the built-in `exit`.



**5. Simple shell 1.0**

Simple shell 0.4 +
*   Implement the `env` **built-in**, that prints the current environment.



**6. Simple shell 0.1.1**

Simple shell 0.1 +
*   Write your own `getline` function.
*   Use a buffer to read many chars at once and call the least possible the `read` system call.
*   You will need to use `static` variables.
*   You are not allowed to use `getline`.
You don’t have to:
*   be able to move the cursor.


## Authors:

* Moundir Iharchafane <messagelordwill@gmail.com>
* Abderrahman El-otmani <abderrahmaot@gmail.com>
