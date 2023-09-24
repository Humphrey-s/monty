#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
/**
 * _error - free stack
 * @stack: stack
 * @n: line_number
 * Return: (Success)
 */
void _error(stack_t **stack, UNUSED unsigned int n)
{
	free_stack(&*stack);

	exit(EXIT_FAILURE);
}
