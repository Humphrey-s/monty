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
	char *ptr_copy;
	char *ptr2;
	char **opcode = malloc(sizeof(char *) * 2);
	char *ptr;
	int i = 0;

	stack_t *stack = NULL;

	/*printf("in stack.c\n");*/

	strcpy(str, line);
	ptr = strtok(str, "$\n");

	if (ptr != NULL)
	{
	ptr_copy = malloc(sizeof(char) * (strlen(ptr) + 1));

	strcpy(ptr_copy, ptr);

	}
	free(str);

	/*printf("%s\n", ptr_copy);*/

	/*printf("2\n");*/
	ptr2 = strtok(ptr_copy, " \n");

	/*printf("2\n");*/

	while (ptr2 != NULL)
	{
		opcode[i] = malloc(sizeof(char) * (strlen(ptr2) + 1));

		strcpy(opcode[i], ptr2);

		ptr2 = strtok(NULL, " \n");
		i++;
	}

	free(ptr_copy);

	/*printf("%s\n", opcode[0]);*/

	if (strcmp(opcode[0], "push") == 0 && i == 2)
	{
	element = atoi(opcode[1]);
	}


	/*element = atoi(opcode[1]);*/
	/*_push(&stack, line_number);*/

	get_instruction(opcode[0])(&stack, line_number);
return (0);
}
