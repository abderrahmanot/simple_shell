#include "shell.h"

/**
 * main- entry point to program
 * @argc: argument count
 * @argv: argument
 * Return: condition
 */

int main(int argc, char **argv)
{
	char *nline = NULL;
	char **comd = NULL;
	int wstatus = 0;
	(void) argc;

	while (1)
	{
		nline = _getline();
		if (nline == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			return (wstatus);
		}
		comd = ftoken(nline);
		if (comd == NULL)
			continue;
		else
			wstatus = forkf(comd, argv);
	}
}
