#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments in command line
 * @av: values of arguments
 *
 * Return: 0
 */

int main(__attribute__((unused)) int ac, __attribute__((unused)) char *av[], char **env)
{
	char *buffer = NULL/*, **tokens*/;

	while (1)
	{
		prompt("$£$ ");
		buffer = _getline();
		/* tokens = split_line(buffer);*/
		getfunc(buffer);

		execute(buffer, env);
	}
	return (0);
}
