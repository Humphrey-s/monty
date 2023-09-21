#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>
/**
 * get_instruction - check instructions and matches them to the appropriate functions
 *
 * @opcode: opcode instruction
 * @stack: the stack
 * @line_number: line number
 * Return: 1 if success or 0 if failure
 */
void (*get_instruction(char *op))(stack_t **stack, unsigned int line_number)
{ 
instruction_t stp[] = {
	{"push", _push},
	{"pall", print_stack},
	/*{"pint", print_t},
	{"pop", pop},
	{"swap", swap_t},
	{"add", _add},
	{"nop", _nop},*/
	{NULL, NULL},
};
int i = 0;

while(stp[i].opcode != NULL)
{
	if (strcmp(stp[i].opcode, op) == 0)
	{
		break;
	}
	i++;
}

return (stp[i].f);
}
