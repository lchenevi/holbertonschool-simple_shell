#include "shell.h"

/**
 * _getenv - Find the environment variable.
 * @name: Environment variable.
 * @env: Array of environment variables.
 *
 * This function searches for a specific environment variable in the
 * provided environment array and returns its store_value if found.
 *
 * Return: Allocated string containing the content
 * of the environment variable or NULL if not found.
 */
char *_getenv(const char *name, char **env)
{
	/*Calculate the length of the environment variable name*/
	size_t name_len = strlen(name);
	char *store_value;
	int i;

	/*Loop through each environment variable until NULL*/
	for (i = 0; env[i]; i++)
	{
		if (strncmp(env[i], name, name_len) == 0 && env[i][name_len] == '=')
		{
			/*Allocate memory to store the value of the env variable after*/
			/*the = symbol*/
			store_value = strdup(&env[i][name_len + 1]);

			/*Check if memory allocation was successful*/
			if (store_value == NULL)
			{
				/*Print error and exit if memory allocation failed*/
				perror("strdup");
				exit(EXIT_FAILURE);
			}
			return (store_value);
		}
	}
	/*Return NULL if the environment variable is not found*/
	return (NULL);
}
