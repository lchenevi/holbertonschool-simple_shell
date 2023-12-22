#include "shell.h"
/**
 * main - main file
 * @argc: argument count
 * @argv: argument value
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		no_interact(argc, argv);
	else
		interactive();

	return (0);
}
