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
#include <stdarg.h>
#include <stdbool.h>
#include <signal.h>

extern char **environ;

int _putchar(char c);
void _exec(char **args);
char **split_line(char *line);
char *read_line();
void prints_env(void);
int _printf(const char *format, ...);
int _isalpha(int c);
int _isalnum(int c);
char *_strncat(char *dest, char *src, int n);
int strcmp_chars(char str[], const char *delim);
char *_strtok3(char str[], const char *delim);
int str_len(char *str);
int _puts(const char *str);
char *_strcat(char *dest, char *src);
char *_strstr(char *haystack, char *needle);
char *_strncpy(char *dest, char *src, int n);
char *_strrchr(char *str, int character);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, size_t n);

#endif /*SHELL_H_*/
