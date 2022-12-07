#include "main.h"

/**
 * execute - executes commands and bultins
 * @buff: user input
 * @env: global environment
 *
 */

char **execute(char *buff, char **env)
{
	char **tokens = NULL;

	tokens = split_line(buff);
	if (tokens[0])
	{
		exec(buff, tokens, env);
		free(tokens);
		return (tokens);
	}
	return(NULL);
}
