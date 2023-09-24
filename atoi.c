#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _atoi - converts a string to int
 * @str: string
 * @n: line number
 * Return: (success)
 */
int _atoi(char *str, unsigned int n)
{
	int i = 0;

	if (str == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", n);
		exit(EXIT_FAILURE);
	}

	if (strcmp("0", str) == 0)
	{
		return (0);
	}

	i = atoi(str);

	if (i == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", n);
		exit(EXIT_FAILURE);
	}

	return (i);
}
