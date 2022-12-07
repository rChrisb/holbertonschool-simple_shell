#include "main.h"

/**
 * getfunc - gets the right function for the input command
 * @s: input command
 *
 * Return: function to execute
 */

int (*getfunc(char *s))(void)
{
	builtin builts[] = {
		{"env", _printenv},
		{NULL, NULL}
	};
	int i = 0;

	while ((builts[i].function != NULL) && (strcmp(builts[i].command, s) != 0))
	{
		i++;
	}
	return (builts[i].function);
}
