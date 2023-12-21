#include "shell.h"

/**
 * no_interact - non interactive mode
 * @argc: argument count
 * @argv: argument value
 */

void no_interact(int argc, char *argv[])
{
	char *command;
	char *args[MAX_ARGS];

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s command [args...]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	command = argv[1];
	parse_input(argv[1], command, args);

	execute_cmd(command, args);
}
