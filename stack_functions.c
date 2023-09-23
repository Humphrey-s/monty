#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
#include <unistd.h>
/**
 * _push - pushes an element to stack
 *
 * @stack: the stack
 * @line_number: line of instruction
 * Return: (Success)
 */
void _push(stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *ptr = *stack;

	if (new_node == NULL)
	{
		free(new_node);
	}


	new_node->n = element;
	new_node->prev = NULL;
	new_node->next = ptr;

	if (*stack != NULL)
	{
		ptr->prev = new_node;
	}

	*stack = new_node;
}
/**
 * print_stack - prints elements in a stack
 * @stack: the stack
 * @line_number: line number
 * Return: (Success)
 */
void print_stack(stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr == NULL)
	{
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
