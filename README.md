# Simple Shell Project

![img](https://hackernoon.com/images/RehfvhVduMecnl6qtW8ev7jN1H72-ran482647.jpg)

## Description
This repository is a project during the first year of **```Holberton School```**. This is our second group project. In this project, we are recoding our own shell.

## Resources
### Read or Watch:
- [Unix shell](https://en.wikipedia.org/wiki/Unix_shell)
- [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)

## Requirements
> All files were created and compiled on `Ubuntu 20.04 LTS`using `GCC`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

### List of allowed functions and system calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Compilation
> `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hshs`

## Function returns
On success the program always returns 0. Otherwise, the program returns a negative value.

## Examples:
### interactive
```c
chrisbikoy@PC_Bikoy:~$ ./hsh
$£$ ls
README.md        builtinsoptions.c  exec_all.c  hsh     main.h    searchpath.c
builtingetter.c  exec.c             getline.c   main.c  prompt.c  token.c
$£$ exit
chrisbikoy@PC_Bikoy:~$
```
### no-interactive
```c
chrisbikoy@PC_Bikoy:~$ echo "/bin/ls" | ./hsh
README.md        builtinsoptions.c  exec_all.c  hsh     main.h    searchpath.c
builtingetter.c  exec.c             getline.c   main.c  prompt.c  token.c
chrisbikoy@PC_Bikoy:~$
```

## Execute the man page
> `sudo mkdir /usr/local/man/man1`
> `sudo cp man_1_simple_shell.1 /usr/local/man/man1`
> `sudo gzip /usr/local/man/man1/man_1_simple_shell.1`
> `sudo mandb`
> `man man_1_simple_shell`

## Check memory leaks
> `valgrind --leak-check=full --show-leak-kinds=all -v ./hsh`

-------------------------
## Files Usage
| File Name | Description |
|:----------:|:----------:|
| main.c | Tha main called all the functions to execute the shell. |
| main.h | The main.h contain all our the prototypes used as well as containing our struct and the standard libraries used. |
| prompt.c | Creates and display prompt. |
| getline.c | Create space for user input. |
| exec.c | Execute command files. |
| exec_all.c | Execute user input. |
| token.c | Split user input into arguments. |
| searchpath.c | Puts user input after the found path. |
| builtingetter.c | function pointer to builtin. |
| builtinsoptions.c | Builtins to be executed.|

-------------------------
# Flowchart

![img](https://github.com/rChrisb/holbertonschool-simple_shell/blob/main/Untitled%20Diagram.drawio.png)

-------------------------
## Tasks

### 0. README, man, AUTHORS
- Write a `README`
- Write a `man` for your shell.
- You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository.
 Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS)

-----------------------------
### 1. Betty would be proud
Write a beautiful code that passes the Betty checks

-----------------------------
### 2. Simple shell 0.1
Write a UNIX command line interpreter.
- Usage: `simple_shell`

Your Shell should:
- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- You have to handle the “end of file” condition (`Ctrl+D`)

You don’t have to:
- use the `PATH`
- implement built-ins
- handle special characters : `"`, `'`, ``\`, `\`, `*`, `&`, `#`
- be able to move the cursor
- handle commands with arguments
`execve` will be the core part of your Shell, don’t forget to pass the environ to it…

-----------------------------
### 3. Simple shell 0.2
Simple shell 0.1 +
- Handle command lines with arguments

-----------------------------
### 4. Simple shell 0.3
Simple shell 0.2 +
- Handle the `PATH`
- `fork` must not be called if the command doesn’t exist

-----------------------------
### 5. Simple shell 0.4
Simple shell 0.3 +
- Implement the `exit` built-in, that exits the shell
- Usage: `exit`
- You don’t have to handle any argument to the built-in `exit`

-----------------------------
### 6. Simple shell 1.0
Simple shell 0.4 +
- Implement the `env` built-in, that prints the current environment

-----------------------------
# Authors

- `Chris Bikoy` - [rChrisb](https://github.com/rChrisb).
- `Alina Jin` - [ali-jin](https://github.com/ali-jin).
