#include <stdlib.h>
#include <unistd.h>
#include "monty.h"
/**
 * getfile - reads until EOF and stores in buffer
 *
 * @buffer: where the lines are to be stored
 * @file: file stream
 * Return: returns number of characters read
 */
int getfile(UNUSED char **buffer, size_t n, FILE *file)
{
	ssize_t no_char;
	int i = 1;
	
	no_char = getline(&buffer[0], &n, file);

	while (no_char != EOF)
	{
		buffer[i] = NULL;
		no_char = getline(&buffer[i], &n, file);
		i++;
	}

return (i);
}
