#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "monty.h"
/**
 * execute_line - executes line
 * @line: opcode
 * @line_number: line number
 * @stack: stack;
 * Return: (Success)
 */
int execute_line(stack_t **stack, char *line, unsigned int line_number)
{
	char *line_copy = malloc(sizeof(char) * (strlen(line) + 1));
	char *line_2, *ptr;
	char **buff;
	stack_t **ptr2 = stack;
	int i = 0, n = 0;

	strcpy(line_copy, line);
	ptr = strtok(line_copy, " \n");

	while (ptr != NULL)
	{
		i++;
		ptr = strtok(NULL, " \n");
	}
	free(line_copy);

	if (i == 0)
	{
		return (-1);
	}
	buff = malloc(sizeof(char *) * (i + 1));
	line_2 = strdup(line);
	ptr = strtok(line_2, " \n");

	while (ptr != NULL)
	{
		buff[n] = malloc(sizeof(char) * (strlen(ptr) + 1));
		strcpy(buff[n], ptr);
		ptr = strtok(NULL, " \n");
		n++;
	}
	free(line_2);
	buff[n] = NULL;
	if (strcmp("push", buff[0]) == 0)
	{
		element = _atoi(buff[1], line_number);
	}
	get_instruction(buff[0], line_number)(ptr2, line_number);
	free_as(buff, n);
return (0);
}
