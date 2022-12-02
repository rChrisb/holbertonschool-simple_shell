#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

void prompt(char p[10]);
char * _getline(void);
void exec(char *buf, char *av[]);
char **split_line(char *buff);


int main(__attribute__((unused)) int ac, char *av[])
{
	while (1)
	{
	prompt("$£$ ");
	char *buffer = _getline();
	char **tokens = split_line(buffer);
	//strtok
	//stat

	exec(buffer, tokens);
	}
	return (0);
}
