#include "main.h"

/**
 * append_text_to_file - Appends text to file name.
 * @filename: A pointer to file nam
 * @text_content: The string that add to the end of file.
 *
 * Return: If the function fails or filename is NULL -1.
 *         If the file does not exist the user lacks write permissions -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	n = write(u, text_content, len);

	if (u == -1 || n == -1)
		return (-1);

	close(u);

	return (1);
}

