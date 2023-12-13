#include "main.h"

/**
 * main - Main arguments functions
 * @ac: Count of arguments
 * @av: Arguments
 * Return: Null
 */
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, handleCtrlC);
	display_prompt();
	return (0);
}
