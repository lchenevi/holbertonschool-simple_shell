#include "shell.h"

/**
 * execute_cmd - executes the command given with its arguments
 * @command: User input string.
 * @args: Array to store arguments.
 *
 * This function creates a child process using fork()
 * Return: 0 on success, -1 on failure
 */

int execute_cmd(char *command, char *args[])
{
	int result, status;
	pid_t pid;

	/*Create a child process using fork()*/
	pid = fork();

	/*Check for fork() failure*/
	if (pid == -1)
	{
		perror("fork");
		return (-1);
	}
	/*Child process*/
	else if (pid == 0)
	{
		/*Attempt to execute the command with the provided arguments*/
		result = execve(command, args, NULL);

		/*Check if execve() failed*/
		if (result == -1)
		{
			perror("execve");
			/*Terminate the child process with failure status*/
			_exit(EXIT_FAILURE);
		}
	}
	/*Parent process*/
	else
	{
		/*Wait for the child process to complete its execution*/
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("waitpid");
			return (-1);
		}
	}
	/*Return 0 to indicate successful execution of the command*/
	return (0);
}
