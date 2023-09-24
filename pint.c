#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _pint - prints value at top of stack
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
