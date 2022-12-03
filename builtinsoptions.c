#include "main.h"

/**
 * _exit - exit the new shell
 *
 * Return: exit code
 */

int _exitshell(void)
{
	exit(100);
}

/**
 * _printenv - prints environment
 *
 * Return: 0
 */

int _printenv(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}
