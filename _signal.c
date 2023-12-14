#include "shell.h"

/**
 * _signal - it keeps track in interactive mode
 * @m: the signal number
 * Return: nothing
 */

void _signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
