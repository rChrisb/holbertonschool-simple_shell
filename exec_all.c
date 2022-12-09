#include "main.h"

/**
 * execute - executes commands and bultins
 * @buff: user input
 * @env: global environment
 * Return: 0 il no argument, otherwise returns the value of execve call
 */

int execute(char *buff, char **env)
{
	char **tokens = NULL;
	int status;

	tokens = split_line(buff);
	if (tokens[0])
	{
		status = exec(buff, tokens, env);
		free(tokens);
		return (status);
	}
	else
	{
		free(tokens);
	}
	return (0);
}
