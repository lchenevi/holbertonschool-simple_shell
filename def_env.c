#include "shell.h"

/**
 * def_env - Display environment variables in interactive mode.
 * This function iterates through the environment variables
 * Return: void
 */

void def_env(void)
{
	/*Initialize env_var to point to the first environment variable*/
	char *env_var = *environ;

	/*Loop through each environment variable until reaching NULL*/
	while (env_var != NULL)
	{
		printf("%s\n", env_var);
		/*Move to the next environment variable*/
		env_var = *(environ++);
	}
}
