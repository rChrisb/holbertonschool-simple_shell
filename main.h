#ifndef MAIN_H
#define MAIN_H

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * struct builtin - Structure for built-ins
 * @command: command input
 * @function: function to execute
 *
 */
typedef struct builtin
{
	char *command;
	int (*function)(void);
} builtin;

extern char **environ;
int (*getfunc(char *s))(void);
int _exitshell(void);
int _printenv(void);


void prompt(char p[6]);
char *_getline(void);
void exec(char *buf, char *av[]);
char **split_line(char *buff);



#endif
