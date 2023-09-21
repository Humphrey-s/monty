#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
#include <unistd.h>
/**
 * push - pushes an element to stack
 *
 * @stack: the stack
 * @line_number: line of instruction
 * Return: (Success)
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = malloc(sizeof(stack_t));

	if (ptr == NULL)
	{
		free(ptr);
	}

	ptr->n = element;
	ptr->prev = NULL;
	ptr->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = ptr;
	}

	*stack = ptr;
}
/**
 * print_stack - prints elements in a stack
 * @stack: the stack
 * @line_number: line number
 * Return: (Success)
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	printf("hallo\n");
	/*stack_t *ptr = *stack;

	if (*stack == NULL)
	{
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}*/
}
