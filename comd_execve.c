#include "shell.h"
/**
 * forkf - Executes commands
 * @comd: Array of parsed command strings
 *
 * @argv: Argument before program start
 * Return: 0 if command executed
 */
int forkf(char **comd, char **argv)
{
	pid_t pidchild;
	int wstatus;

	pidchild = fork();
	if (pidchild == 0)
	{
		if (execve(comd[0], comd, environ) == -1)
		{
			perror(argv[0]);
			ffree(comd);
			exit(127);
		}
	}
	else
	{
		waitpid(pidchild, &wstatus, 0);
		ffree(comd);
	}
	return (WEXITSTATUS(wstatus));
}
