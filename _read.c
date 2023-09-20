#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _interpret - read a file and store the contents in a buffer
 * @file: file pointer
 * Return: returns buffer
 */
int _interpret(FILE *file)
{
	char **buffer = malloc(sizeof(char *));
	size_t n = 0;
	int d;

	d = getfile(buffer, n, file);

	printf("%d\n", d);
	printf("%s\n", buffer[0]);
	free(buffer);
	fclose(file);

return (d);
}
