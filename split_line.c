#include <stdio.h>
#include <string.h>
#include <stdlib>

/**
 * split_line - split line in tokens
 * @argv: line
 *
 * Return:
*/
char **split_line(char **argv)
{
	int bufsize = 64, pos = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token

	token = strtok(argv, " ");
	while(token != NULL)
	{
		tokens[pos] = token;
		pos++;
		token = strtok(NULL, " ");
	}
	tokens[pos] = NULL;

	return (tokens);
}
