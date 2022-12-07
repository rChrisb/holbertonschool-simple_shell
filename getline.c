#include "main.h"

/**
 * _getline - takes user input
 *
 * Return: user input
 */

char *_getline(void)
{
	char *buf = NULL;
	size_t n = 0;
	int val;


	val = getline(&buf, &n, stdin);

	if (val == -1)
	{
		if (feof(stdin))
		{
			free(buf);
			exit(EXIT_SUCCESS);
		}
		if (buf)
			free(buf);  /*getline autmoatically allocated memory for buf*/
		exit(EXIT_FAILURE);
	}
	if (val == 0)
	{
		free(buf);
		return (NULL);
	}
	buf[val - 1] = '\0';
	return (buf);
}
