#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

char *_getline(void)
{
	char command[50];
	char *buf = command;
	size_t n = 50;
	int val;

	val = getline(&buf, &n, stdin);
	buf[strlen(buf) - 1] = '\0';
	
	if (val == -1)
	{
		free(buf);  /*getline autmoatically allocated memory for buf*/
		exit(EXIT_FAILURE);
	}
	return (buf);
}
