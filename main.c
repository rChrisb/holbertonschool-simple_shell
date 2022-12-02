#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

void prompt(char p[10]);
char * _getline(void);
void exec(char *buf, char *av[]);
int main(__attribute__((unused)) int ac, char *av[])
{
	while (1)
	{
	prompt("$£$ ");
	char *buffer = _getline();
	//strtok
	//stat
	exec(buffer, av);
	}
	return (0);
}
