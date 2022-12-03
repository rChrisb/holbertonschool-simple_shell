#ifndef MAIN_H
#define MAIN_H

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

void prompt(char p[10]);
char *_getline(void);
void exec(char *buf, char *av[]);
char **split_line(char *buff);



#endif
