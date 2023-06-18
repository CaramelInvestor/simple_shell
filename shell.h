#ifndef SHELL_H_
#define SHELL_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

void _exec(char **args);
char **split_line(char *line);
char *read_line();

#endif /*SHELL_H_*/