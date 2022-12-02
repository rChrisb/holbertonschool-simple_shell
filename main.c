#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

void prompt(char p[6]);
char * _getline(void);
void exec(char *buf, char *av[]);
char **split_line(char *buf);
int main(__attribute__((unused)) int ac, char *av[])
{
	char *buffer, **tokens;

	while (1)
	{
	prompt("$£$ ");
	buffer = _getline();
	tokens = split_line(buffer);
	exec(buffer, tokens);
	}
	return (0);
}
