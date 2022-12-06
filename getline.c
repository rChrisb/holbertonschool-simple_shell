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
	/*buf[strlen(buf) - 1] = '\0';*/

	if (val == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		if (buf)
			free(buf);  /*getline autmoatically allocated memory for buf*/
		exit(EXIT_FAILURE);
	}
	return (buf);
}
