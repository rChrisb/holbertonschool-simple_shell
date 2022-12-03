#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments in command line
 * @av: values of arguments
 *
 * Return: 0
 */

int main(__attribute__((unused)) int ac, __attribute__((unused)) char *av[])
{
	char *buffer, **tokens;

	while (1)
	{
	prompt("$£$ ");
	buffer = _getline();
	tokens = split_line(buffer);

	exec(buffer, tokens);
	}
	return (0);
}
