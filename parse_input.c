#include "shell.h"

/**
 * parse_input - AnalyseAndSplit user input into command and arguments.
 * @input: User input string.
 * @command: Pointer to store the command.
 * @args: Array to store arguments.
 * This function takes a user input string and tokenizes it to extract
 * the command and its arguments.
 */

void parse_input(char *input, char *command, char *args[])
{
	/*Tokenize the input string using space as delimiter*/
	char *token = strtok(input, " ");
	/*Index variable for the args*/
	int index;

	(void)command;/*Suppress unused parameter warning*/

	/*Check if the string is NULL*/
	if (token == NULL)
	{
		command = NULL;
		return;
	}
	/*Copies the string in 'token' into 'command'*/
	/*strcpy(command, token);*/
	index = 0;

	/*Iterate through the tokens to extract arguments*/
	while (token != NULL)
	{
		/*Allocate memory for each argument and store it in the args array*/
		args[index] = malloc(strlen(token) + 1);

		/*Check if memory allocation was successful*/
		if (args[index] == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		/*Copy the token (argument) to the corresponding position in the*/
		/*args array*/
		strcpy(args[index], token);

		/*Get the next token (argument)*/
		token = strtok(NULL, " ");
		/*Move to the next position in the args array*/
		index++;
	}
	args[index] = NULL;
	/*execute_cmd(command, args);*/
}
