#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

/**
 * main - entry point
 *
 *
 */

int main(__attribute__((unused)) int ac, char *av[])
{
	char command[30];
	char *buf = command;
	pid_t pid;
	size_t size = 30;
	int exe;

	while (1)
	{
		printf("$ ");
		getline(&buf, &size, stdin);
		buf[strlen(buf) - 1] = '\0';

		pid = fork();
		if (pid == 0)
		{
			exe = execve(buf, av, NULL);
			if (exe == -1)
				perror(" ");
			if (EOF)
				exit(EXIT_SUCCESS);

		}
		else
			wait(NULL);
	}
	return (0);
}
