#include "shell.h"

/**
 * no_interact - Execute commands in non-interactive mode.
 * @argc: argument count
 * @argv: argument value
 * Note: The first argument (argv[0]) is typically the program name itself.
 */

void no_interact(int argc, char *argv[])
{
	/*To store the command to be executed*/
	char *command;
	/*Array to store arguments for the command*/
	char *args[MAX_ARGS];

	/*Check if the number of command-line arguments is less than 2*/
	if (argc < 2)
	{
		/*If insufficient arguments are provided, print then exit*/
		fprintf(stderr, "Usage: %s command [args...]\n", argv[0]);
		exit(EXIT_FAILURE); /*Exit the program with a failure status*/
	}

	/*Extract the command from the command-line arguments*/
	command = argv[1];
	/*Parse the input command and its arguments*/
	parse_input(argv[1], command, args);
	/*Execute the parsed command with its arguments*/
	execute_cmd(command, args);
}
