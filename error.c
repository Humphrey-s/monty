#include "monty.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * _error - prints error for unknown commands
 * @stack: stack
 * @line_number: line containing unknown command
 * Return: (Success)
 */
void _error(UNUSED stack_t **stack, unsigned int line_number)
{
	char str[1024];
	atoil(line_number, str);

	write(2, "L", 1);
	write(2, str, strlen(str));
	write(2, ": unknown instruction\n", strlen(": unknown instruction\n"));
}
/**
 * atol - converts integer to string
 * Return: (Success)
 */
void atoil(unsigned int n, char *str)
{
	size_t i = n % 10;
	size_t b2 = n / 10;
	int b;

	if (b2 == 0)
	{
		str[0] = 48 + i;
	}

	while ((b = n % 10) != 0)
	{
		str[0] = 48 + b;

		n = n / 10;
	}
}
