#include "main.h"

/**
 * main - Main arguments functions
 * @ac: Count of arguments
 * @av: Arguments
 * Return: Null
 */
void handleCtrlC(int sig);

int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, handleCtrlC);
	displayprompt();
	return (0);
}