#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
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
