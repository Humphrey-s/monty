#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
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

	while (str[i] != '\0')
	{
		if (isalpha(str[i]) != 0)
		{
			i = -1;
			break;
		}

		i++;
	}

	if (i == -1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", n);
		exit(EXIT_FAILURE);
	}

	return (atoi(str));
}
