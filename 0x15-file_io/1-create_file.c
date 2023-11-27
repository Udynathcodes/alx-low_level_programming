#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{


	int fd, len, bytes_written;


	if (filename == NULL)

	return (-1);


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)

	return (-1);

	if (text_content != NULL)
	{

	for (len = 0; text_content[len] != '\0'; len++);


	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1 || bytes_written != len)
	{

	close(fd);

	return (-1);

	}
	}

	close(fd);
	return (1);
}
