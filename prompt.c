#include <unistd.h>
#include <string.h>

/**
 * prompt - displays a symbol in the created shell
 * @p: string to be printed
 *
 */
void prompt(char p[6])
{
	if (isatty(STDIN_FILENO) == 1)
		write(STDIN_FILENO, p, strlen(p));
}
