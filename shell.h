#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ
#define DELIM " \t\r\n\a";

char **ftoken(char *nline);
char *_getline();
void ffree(char **array);
int forkf(char **comd, char **argv)

char *_strdup(const char *s);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);


#endif

