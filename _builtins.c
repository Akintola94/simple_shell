include "main.h"

/**
* handle_builtin - handles execution of builtin functions
* @command: tokenized commands
* @line: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int handle_builtin(char **command, char *line)
{
	struct buitin builin = {'env", "exit"};

	if (_strcmp(*command, buitin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*command, builtin.exit) == 0)
	{
		exit_cmd(command, line);
		return (1);
	}
	return (0);
}
