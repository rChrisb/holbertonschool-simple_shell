#include "main.h"

/**
 * exec - excutes user input
 * @buf: user input
 * @av: tokens
 *
 */
void exec(char *buf, char *av[], char **env)
{
	pid_t pid;
	char *all = NULL, *path;

	pid = fork();
	path = getenv("PATH");

	if (pid == -1)
	{
		perror("Error");
		free(all);
		return;
	}
	if (pid == 0)
	{
		path = strdup(path);
		all = searchpath(buf, path);
		if (((execve(buf, av, env)) == -1) && !path)
		{
			perror("");
			free(all);
			return;
		}
		if (execve(all, av, NULL) == -1)
		{
			perror("");
			free(all);
			if (feof(stdin))
				exit(EXIT_SUCCESS);
		}
		free(path);
		free(all);
	}
	else
		wait(NULL);
}