#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
#include <unistd.h>
/**
 * _pop - removes top element of stack
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = (*stack)->next;
	stack_t *ptr2 = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}



	*stack = ptr;
	free(ptr2);
}
