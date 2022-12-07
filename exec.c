#include "main.h"

/**
 * exec - excutes user input
 * @buf: user input
 * @av: tokens
 * @env: gloval environment
 */
void exec(char *buf, char *av[], char **env)
{
	pid_t pid;
	char *all = NULL, *path;

	path = getenv("PATH");
	pid = fork();
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
		if (((execve(all, av, env) == -1)) && !path)
		{
			free(all);
			perror("");
			return;
		}
		if (execve(all, av, env) == -1)
		{
			perror("");
			free(all);
			if (feof(stdin))
			{
				free(buf);
				exit(EXIT_SUCCESS);
			}
			return;
		}
		free(all);
	}
	else
		wait(NULL);
}