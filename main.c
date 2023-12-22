#include "shell.h"

/**
 * main - Entry point to the shell program.
 * @argc: argument count
 * @argv: argument value
 * Return: 0, Indicates successful execution of the program.
 */

int main(int argc, char *argv[])
{
	/*Check if additional command-line arguments are provided*/
	if (argc > 1)
		no_interact(argc, argv);
	else
		interactive();
	/*Return 0 to indicate successful execution of the program*/
	return (0);
}
