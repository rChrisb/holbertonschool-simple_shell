#include "main.h"

/**
 * execute - execute commands
 * @buff: command
 * @env: path
 *
 */

void execute(char *buff, char **env)
{
	char **tokens = NULL;

	tokens = split_line(buff);
	if (tokens[0])
	{
		exec(buff, tokens, env);
	}
	freetoken(tokens);
}
