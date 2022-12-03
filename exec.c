#include "main.h"

/**
 * exec - excutes user input
 * @buf: user input
 * @av: tokens
 *
 */




void exec(char *buf, char *av[])
{
	pid_t pid;
	int x;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		return;
	}
	if (pid == 0)
	{
		x = execve(buf, av, NULL);
		if (x == -1)
		{
			perror("");
			if (feof(stdin))
				exit(EXIT_SUCCESS);
		}
	}
	else
		wait(NULL);

}
