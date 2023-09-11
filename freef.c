#include "shell.h"
/**
 * ffree- function that free
 * @array: argument
 * Return: void
 */
void ffree(char **array)
{
	int i = 0;

	if (array == NULL)
	{
		return;
	}
	while (array)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array  NULL;
}
