#include "shell.h"

/**
 * execute_cmd - executes the command
 * @command: User input string.
 * @args: Array to store arguments.
 * Return: hdsd
 */
int execute_cmd(char *command, char *args[])
{
	int result, status;
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return (-1);
	}
	else if (pid == 0)
	{
		result = execve(command, args, NULL);

		if (result == -1)
		{
			perror("execvp");
			_exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("waitpid");
			return (-1);
		}
	}

	return (0);
}
