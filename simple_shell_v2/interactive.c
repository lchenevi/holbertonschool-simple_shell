#include "shell.h"

void interactive(void)
{
	char input[MAX_INPUT_LENGTH];
	char *command;
	char *args[MAX_ARGS];
	size_t input_length;

	/*Checks if user is in interactive mode
	if (!isatty(STDIN_FILENO))
	{
		fprintf(stderr, "Error: Not in interactive mode.\n");
		exit(EXIT_FAILURE);
	}*/

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");

		/*Checks if input in correct*/
		if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL)
		{
			printf("\n");
			break;
		}

		input_length = strlen(input);
		/*Check if last char isn't NULL*/
		if (input_length > 0 && input[input_length - 1] == '\n')
		{
			input[input_length - 1] = '\0';
		}

		/*Compares if input is exit*/
		if (strcmp(input, "exit") == 0)
		{
			break;
		}
		/*Compares if input is env*/
		else if (strcmp(input, "env") == 0)
		{
			def_env();
		}
		/*Tokenizes the input string to separate the command and any
		potential arguments*/
		else
		{
			command = strdup(strtok(input, " "));
			/*Checks if strtok successfully found the first token*/
			if (command != NULL)
			{
				parse_input(input, command, args);
				/*Analyse the input*/

				execute_cmd(command, args);
				/*Execution of the command with its arguments*/
			}
		}
	}
}
