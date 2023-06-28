#include "shell.h"

/**
 * _exec - Executes the program with an array of token given.
 * @args: List of tokens to be read and executed.
 * Return: void
 */

void _exec(char **args)
{
	pid_t child_pid = fork();
	int status;
	char *arg = NULL;

	if (child_pid == 0)
	{
		if (_strncmp(args[0], "/bin/", 5) == 0)
		{
			execve(args[0], args, environ);
		}
		else
		{
			arg = malloc(str_len(args[0]) * 6);
			_strcpy(arg, "/bin/");
			_strcat(arg, args[0]);
			_strcat(arg, "\0");
			execve(arg, args, NULL);
			free(arg);
		}
		perror("error detected");
		exit(1);
	}
	else if (child_pid > 0)
	{
	do {
	waitpid(child_pid, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	else
	{
		perror("error detected");
	}
}
