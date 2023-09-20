#include "shell.h"

/**
 * _getline - read input from standard input
 * Return: the input on a buffer
 */
char *_getline()
{
	char *nline = NULL;
	size_t nb = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "$ ", 2);
	n = getline(&nline, &nb, stdin);
	if (n == -1)
	{
		free(nline);
		return (NULL);
	}
	return (nline);
}
