#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * _swap - swap the top 2 elements of a stack
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr_i, *ptr2, *ptr3, *ptr;
	int i = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr_i = *stack;
	ptr = *stack;

	while (ptr_i != NULL)
	{
		ptr_i = ptr_i->next;
		i++;
	}

	if (i < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if (i == 2)
	{
		ptr2 = ptr->next;
		ptr2->next = ptr;
		ptr->next = NULL;
		*stack = ptr2;
	}
	else
	{
		ptr2 = ptr->next;
		ptr3 = ptr->next->next;
		ptr2->next = ptr;
		ptr2->prev = NULL;
		ptr->next = ptr3;
		ptr->prev = ptr2;
		ptr3->prev = ptr;
		*stack = ptr2;
	}
}

