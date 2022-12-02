#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

char **split_line(char *buff)
{
	int bufsize = 64, pos = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	token = strtok(buff, " ");
	while(token != NULL)
	{
		tokens[pos] = token;
		pos++;
		token = strtok(NULL, " ");
	}
	tokens[pos] = NULL;

	return (tokens);
}
