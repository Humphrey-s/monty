#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>
/**
 * get_instruction - matches opcode to the appropriate functions
 * @n: line number
 * @op: opcode instruction
 * Return: 1 if success or 0 if failure
 */
void (*get_instruction(char *op, unsigned int n))(stack_t **st, unsigned int n)
{
instruction_t stp[] = {
	{"push", _push},
	{"pall", print_stack},
	{NULL, NULL},
};
int i = 0;

while (stp[i].opcode != NULL)
{
	if (strcmp(stp[i].opcode, op) == 0)
	{
		break;
	}
	i++;
}

if (stp[i].opcode == NULL && op != NULL)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", n - 1, op);
	exit(EXIT_FAILURE);
}

return (stp[i].f);
}
