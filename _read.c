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
	int a = get_no_line(file);

	char **buffer = malloc(sizeof(char *) * (a + 2));
	size_t n = 0;
	int d, i = 0;

	d = getfile(buffer, n, file);

	printf("%d\n%d\n", d, a);
	printf("%s\n", buffer[i]);

	fclose(file);
	free_as(buffer, n);

return (d);
}
