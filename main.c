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
	char *buffer = NULL, **tokens;

	(void)ac;
	(void)av;

	while (1)
	{
		prompt("$£$ ");
		buffer = _getline();
		if (feof(stdin))
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		while ((*buffer != '\0') && *buffer == ' ')
		{
			buffer++;
		}
		if (buffer != NULL)
		{
			getfunc(buffer);
			tokens = execute(buffer, env);
			free(buffer);
		}
		else
		{
			free(buffer);
			freetoken(tokens);
		}
	}
	return (0);
}