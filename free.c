#include <stdlib.h>
#include "monty.h"
/**
 * free_as - free array of strings
 * @as: array of strings
 * Return: (Success)
 */
void free_as(char **as, UNUSED int n)
{
	int i = 0;

	if (as == NULL)
	{
		free(as);
	}

	while (as[i] != NULL)
	{
		free(as[i]);
		i++;
	}
	free(as);
	as = NULL;
}
