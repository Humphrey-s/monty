#include <stdlib.h>
#include <unistd.h>
#include "monty.h"
#include <string.h>
/**
 * getfile - reads until EOF and stores in buffer
 *
 * @buffer: where the lines are to be stored
 * @file: file stream
 * Return: returns number of characters read
 */
int getfile(char **buffer, size_t n, FILE *file)
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
	buffer[i] = NULL;

return (i);
}

int get_no_line(FILE *file)
{
	char c;
	int i = 0;

	while (!feof(file))
	{
		c = fgetc(file);
	
		if (c == '\n')
		{
			i++;
		}
	}
	fseek(file, 0L, SEEK_SET);

return (i);
}
