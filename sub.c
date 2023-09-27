#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * _sub - subtract top element from second top element
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int a;
	stack_t *ptr;
	stack_t *ptr2;

	if ((*stack == NULL) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	ptr = *stack;
	ptr2 = ptr->next;

	a = ptr->n - ptr2->n;

	ptr2->n = a;

	free(ptr);

	ptr2->prev = NULL;

	*stack = ptr2;
}
