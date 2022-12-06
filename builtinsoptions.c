#include "main.h"

/**
 * _exitshell - exit the new shell
 *
 * Return: exit code
 */

int _exitshell(void)
{
	exit(98);
	return(133);
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
		write(1, environ[i], strlen(environ[i]));
		write(1, "\n", 1);
	}
	return (0);
}
