#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * _div - div 2 element by top element
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr, *ptr2;
	int a;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	ptr = *stack;
	ptr2 = ptr->next;

	if (ptr->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = ptr2->n / ptr->n;

	ptr2->n = a;

	free(ptr);

	ptr2->prev = NULL;

	*stack = ptr2;
}


