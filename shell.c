#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - initialize shell
 * @ac: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **argv)
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	pid_t child_pid;
	int status;

	while (1)
	{
		printf("$ ");
		getline(&b, &bufsize, stdin);
		buffer[strlen(buffer) - 1] = '\0';

		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(buffer, argv, NULL) == -1 && buffer != NULL)
				perror(buffer);
		}
		if else(child_pid == -1)
				perror("Error");
		else
			wait(&status);
	}

	return (0);
}
