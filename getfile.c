/*#include <stdlib.h>*/
#include <stdio.h>
#include <unistd.h>
#include "monty.h"
#include <string.h>

#define _POSIX_C_SOURCE 200809L 

/**
 * get_file - reads until EOF and stores in buffer
 *
 * @buffer: where the lines are to be stored
 * @file: file stream
 * Return: returns number of characters read
 */
unsigned int get_file(char **buffer, size_t n, FILE *file)
{
	ssize_t no_char;
	unsigned int i = 1;
	
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
/**
 * get_no_line - gets number of lines in a file
 * @file: file stream
 * Return: returns number of lines in a file
 */
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
