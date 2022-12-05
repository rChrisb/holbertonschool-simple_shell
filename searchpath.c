#include "main.h"

/**
 *
 *
 *
 *
 */

char *searchpath(char *buffer, char *path)
{
	char *direc = NULL;
	char *all = NULL;
	struct stat st;

	direc = strtok(path, ":");
	while (direc)
	{
		all = malloc(sizeof(char) * (strlen(buffer) + strlen(direc) + 2));
		all = strcpy(all, direc);
		all = strcat(all, "/");
		all = strcat(all, buffer);

		if (stat(all, &st) == 0)
			return (all);
		free(all);
		all = NULL;
		direc = strtok(NULL, ":");
	}

	return (strdup(buffer));
}
