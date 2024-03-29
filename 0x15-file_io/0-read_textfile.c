#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @letters: number of letters to be read and printed
 * @filename: pointer to the name of the file
 *
 * Return: 0 if file can't be opened or read, filename is NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
	{
	return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);


	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
