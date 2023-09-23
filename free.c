#include <stdlib.h>
#include "monty.h"
/**
 * free_as - free array of strings
 * @as: array of strings
 * @n: void
 * Return: (Success)
 */
void free_as(char **as, UNUSED int n)
{
	int i = 0;

	if (as == NULL)
	{
		free(as);
	}

	while (as[i] != NULL)
	{
		free(as[i]);
		i++;
	}
	free(as);
	as = NULL;
}
/**
 * free_stack - frees stack
 * @stack: stack
 * Return: (Success)
 */
void free_stack(stack_t **stack)
{
	stack_t *ptr = *stack;
	stack_t *ptr2;

	if (ptr == NULL)
	{
		free(ptr);
	}

	while (ptr != NULL)
	{
		ptr2 = ptr->next;

		free(ptr);

		ptr = ptr2;
	}

}
