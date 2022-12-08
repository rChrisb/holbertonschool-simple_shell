#include "main.h"

/**
 * execute - executes commands and bultins
 * @buff: user input
 * @env: global environment
 *
 */

int execute(char *buff, char **env)
{
	char **tokens = NULL;
	int status;

	tokens = split_line(buff);
	if (tokens[0] && (strcmp(tokens[0], "exit")) != 0)
	{
		status = exec(tokens[0], tokens, env);
		free(tokens);
		return (status);
	}
	else
	{
		free(tokens);
	}
	return (0);
}
