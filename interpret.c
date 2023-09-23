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
	unsigned int a = get_no_line(file);

	char **buffer = malloc(sizeof(char *) * (a + 2));
	size_t n = 0;
	unsigned int i = 0;
	int d;

	d = get_file(buffer, n, file);

	/*printf("%d\n%d\n", d, a);*/
	/*printf("%s\n", buffer[i]);*/

	fclose(file);
	/*implement instructions line by line*/
	/*printf("closing\n");*/

	while (i < a)
	{
		/*printf("%s\n", buffer[i]);*/
		execute_line(buffer[i], 1);
		i++;
	}
	free_as(buffer, n);

return (d);
}
