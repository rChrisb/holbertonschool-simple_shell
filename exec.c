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
	/*free(path);*/
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
			perror("");
			return;
		}
		if (execve(all, av, env) == -1)
		{
			perror("");
			free(all);
			if (feof(stdin))
				exit(EXIT_SUCCESS);
			return;
		}
	}
		else
			wait(NULL);
	if (all)
		free(all);
}
