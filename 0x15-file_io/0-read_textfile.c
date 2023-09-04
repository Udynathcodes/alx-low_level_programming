#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file read
 * @letters: num of letters to read
 * Return: n- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fr;
	ssize_t n;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fr == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(fr, buf, letters);
	n = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(fr);
	return (n);
}

