#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments in command line
 * @av: values of arguments
 * @env: global environment
 * Return: 0
 */

int main(int ac, char *av[], char **env)
{
	char *buffer = NULL/*, **tokens*/;

	(void)ac;
	(void)av;

	while (1)
	{
	prompt("$£$ ");
	buffer = _getline();
	/* tokens = split_line(buffer);*/
	while ((*buffer != '\0') && *buffer == ' ')
		buffer++;

	getfunc(buffer);

	execute(buffer, env);
	}
	free(buffer);
	return (0);
}
