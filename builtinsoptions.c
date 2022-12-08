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
		printf("%s\n", environ[i++]);
	}
	printf("%d\n", i);
	return (0);
}
