#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - that reads a file text and prints
 * @filename: pointer variable
 * @letters: letters size
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, num, n;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	num = read(file, text, letters);

	n = write(STDOUT_FILENO, text, num);

	close(file);

	return (n);
}
