#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "monty.h"
#include <sys/stat.h>

/**
 * main - enty point
 *
 * @argc: count of arguments
 * @av: arguments (should be a monty file)
 * Return: (Success)
 */
int main(int argc, char **av)
{
	char *path;
	FILE *file;
	int rst;
	struct stat statbuff;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		return (EXIT_FAILURE);
	}

	path = strdup(av[1]);

	if (path == NULL)
	{
		free(path);
		printf("strdup NULL\n");
		return (EXIT_FAILURE);
	}
	/*check if file exists*/

	rst = stat(path, &statbuff);
	/*printf("opening file\n");*/
	file = fopen(path, "rw+");

	if ((file == NULL) | (rst != 0))
	{
		write(2, "Error: Can't open file ", 23);
		write(2, path, strlen(path));
		write(2, "\n", 1);
		free(path);

		return (EXIT_FAILURE);
	}
	free(path);
	/*printf("file ready for operation\n");*/

	_interpret(file);

return (0);
}
