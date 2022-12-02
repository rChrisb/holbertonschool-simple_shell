#include <unistd.h>
#include <string.h>
//display prompt 'cisfun$'
void prompt(char p[6])
{
	if (isatty(STDIN_FILENO) == 1)
		write(STDIN_FILENO, p, strlen(p));
}
