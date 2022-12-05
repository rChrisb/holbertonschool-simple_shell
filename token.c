#include "main.h"

/**
 * split_line - takes user input and tokenize it
 * @buff: user input
 *
 * Return: tokenized user input
 */

char **split_line(char *buff)
{
	int bufsize = 64, pos = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	token = strtok(buff, " ");
	while (token != NULL)
	{
		tokens[pos] = token;
		pos++;
		token = strtok(NULL, " ");
	}
	tokens[pos] = NULL;

	return (tokens);
}

/**
 * freetokens - free arguments
 * @tokens: arguments in user input
 *
 */

void freetoken(char **tokens)
{
	int i;

	if (tokens)
	{
		for (i = 0; tokens[i] != NULL; i++)
		{
			free(tokens[i]);
		}
		free(tokens);
	}
}
