#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
/**
 * add_node - add nodes to stack
 *
 * @stack: stack head
 * Return: (Success)
 */
int add_node(stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *ptr = malloc(sizeof(stack_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}

	ptr->n = element;
	ptr->next = *stack;
	ptr->prev = NULL;

	if (ptr != NULL)
	{
		(*stack)->prev = ptr;
	}

	*stack = ptr;

return (0);
}	
