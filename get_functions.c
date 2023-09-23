#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>
/**
 * get_instruction - matches opcode to the appropriate functions
 *
 * @op: opcode instruction
 * Return: 1 if success or 0 if failure
 */
void (*get_instruction(char *op))(stack_t **stack, unsigned int line_number)
{
instruction_t stp[] = {
	{"push", _push},
	{"pall", print_stack},
	{NULL, _error},
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

return (stp[i].f);
}
