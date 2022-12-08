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
	char *buffer = "";
	int error;

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
		if ((strcmp(buffer, "exit") == 0))
		{
			free(buffer);
			exit(0);
		}
		getfunc(buffer);
		error = execute(buffer, env);
		if (error == -1)
			exit(127);
		free(buffer);
	}
	return (0);
}
