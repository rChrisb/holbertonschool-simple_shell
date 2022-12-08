#include "main.h"


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
	printf("%d\n", i);
	return (0);
}
