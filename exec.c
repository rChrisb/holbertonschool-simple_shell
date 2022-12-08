#include "main.h"

/**
 * exec - excutes user input
 * @buf: user input
 * @av: tokens
 * @env: gloval environment
 */
int exec(char *buf, char **av, char **env)
{
	pid_t pid;
	char *all = NULL, *path;

	path = getenv("PATH");
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		path = strdup(path);
		all = searchpath(buf, path);

		if (((execve(all, av, env) == -1)) && !path)
		{
			free(all);
			free(buf);
			free(av);
			perror("");
			return (-1);
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
			return (-1);
		}
		free(all);
	}
	else
		wait(NULL);
	return (0);
}
