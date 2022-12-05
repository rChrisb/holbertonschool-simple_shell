#include "main.h"

/**
 *
 *
 *
 *
 */

void execute(char *buff, char **env)
{
	char **tokens = NULL;

	tokens = split_line(buff);
	if (tokens[0])
	{
		exec(buff, tokens, env);
		/*freetoken(tokens);*/
		return;
	}
	/*freetoken(tokens);*/
}
