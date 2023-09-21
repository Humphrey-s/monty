#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "monty.h"
/**
 * execute_line - executes line
 * @buffer: buffer
 * Return: (Success)
 */
int execute_line(char *line, unsigned int line_number)
{
	/*printf("start ..exec\n");*/

	char *str = malloc(sizeof(char) * (strlen(line) + 1));
	char **opcode = malloc(sizeof(char *) * 2);
	char *ptr;
	int i = 0;

	stack_t *stack = NULL;

	/*printf("in stack.c\n");*/

	strcpy(str, line);
	ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		opcode[i] = malloc(sizeof(char) * (strlen(ptr) + 1));
		strcpy(opcode[i], ptr);

		ptr = strtok(NULL, "$\n");
		i++;
	}
	free(ptr);
	free(str);


	element = atoi(opcode[1]);
	/*_push(&stack, line_number);*/

	get_instruction(opcode[0])(&stack, line_number);
}
