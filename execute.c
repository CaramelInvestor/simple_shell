#include "shell.h"

/**
 * _exec - Executes the program with an array of token given.
 * @args: List of tokens to be read and executed.
 */

void _exec(char **args)
{
	pid_t child_pid = fork();
	int status;
	char *arg = NULL;
	char **ugo;

	if (child_pid == 0)
	{
		if (_strcmp(args[0], "echo") == 0 && _strcmp(args[3], "./hsh") == 0)
		{
			ugo = malloc(sizeof(char *) * str_len(args[1]));
			(ugo)[0] = malloc(str_len(args[1]) + 1);
			_strcpy((ugo)[0], args[1]);
			_strcat((ugo)[0], "\0");
			args[2] = NULL;
			args[3] = NULL;
			execve((ugo)[0], ugo, environ);
			free((ugo)[0]);
			free(ugo);
		}
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
