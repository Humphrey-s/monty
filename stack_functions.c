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
void _push(UNUSED stack_t **stack, UNUSED unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

		new_node->n = element;
		new_node->prev = NULL;
	
	if (head != NULL)
	{
		new_node->next = head;
	}

	head = new_node;
}
/**
 * print_stack - prints elements in a stack
 * @stack: the stack
 * @line_number: line number
 * Return: (Success)
 */
void print_stack(UNUSED stack_t **stack, UNUSED unsigned int line_number)
{
	/*printf("hallo\n");*/

	stack_t *ptr = head;

	if (ptr == NULL)
	{
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
