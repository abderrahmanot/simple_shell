#include "shell.h"
/**
 * ftoken- function that extracts tokens of a string
 * @nline: string
 * Return: pointer to the next token or NULL
 */
char **ftoken(char *nline)
{
	char *tokens, **comd = NULL, *tmp;
	int i = 0, cpt = 0;

	if (!nline)
		return (NULL);
	tmp = _strdup(nline);
	tokens = strtok(tmp, DELIM);
	if (tokens == NULL)
	{
		free(tmp);
		tmp = NULL;
		free(nline);
		nline = NULL;
		return (NULL);
	}
	while (tokens)
	{
		cpt++;
		tokens = strtok(NULL, DELIM);
	}
	free(tmp);
	tmp = NULL;
	comd = malloc(sizeof(char *) * (cpt + 1));
	if (!comd)
	{
		free(nline);
		nline = NULL;
		return (NULL);
	}
	tokens = strtok(nline, DELIM);
	while (tokens)
	{
		comd[i++] = _strdup(tokens);
		tokens = strtok(NULL, DELIM);
	}
	comd[i] = NULL;
	free(nline);
	nline = NULL;
	return (comd);
}
