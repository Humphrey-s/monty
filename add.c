#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "monty.h"
/**
 * _add - adds elements in a stack
 * @stack: stack
 * @line_number: line number
 * Return: (Success)
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	stack_t *p;
	int i = 0;
	int sum = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	ptr = *stack;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	if (i < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	p = *stack;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	element = sum;

	_pop(&*stack, line_number);
	_push(&*stack, line_number);
}
