#include "main.h"

/**
 * custom_strlen - Computes the length of a string manually.
 * @str: Pointer to the string to be measured.
 * Return: Length of the string.
 */
int custom_strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * create_file - Creates a new file or truncates an existing one.
 * @file_name: Name of the file to be created or modified.
 * @content_text: NULL-terminated string to be written to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *file_name, char *content_text)
{
	int fd;
	ssize_t bytes_written;

	if (file_name == NULL)
	{
		return (-1);
	}

	fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (content_text != NULL)
	{
		bytes_written = write(fd, content_text, custom_strlen(content_text));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
