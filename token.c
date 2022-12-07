#include "main.h"

/**
 * split_line - takes user input and tokenize it
 * @buff: user input
 *
 * Return: tokenized user input
 */

char **split_line(char *buff)
{
	int /*bufsize = 64,*/ pos = 0;
	char **tokens = malloc(sizeof(char *) * ignorespace(buff) + 1);
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
 * ignorespace - ignores spaces
 * @buffer: user input
 *
 * Return: length of input without spaces
 */

int ignorespace(char *buffer)
{
	int i = 0, len = 0, space = 0;

	while (buffer && buffer[i])
	{
		if (buffer[i] == '\n' || buffer[i] == ' ' || buffer[i] == '\t')
		{
			if (buffer[i] == '\n')
				buffer[i] = '\0';
			space = 0;
		}
		else if (space == 0)
		{
			space = 1;
			len++;
		}
		i++;
	}
	return (len);
}

/**
 * freetoken - free arguments
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