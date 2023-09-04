#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file name created.
 * @text_content: A pointer string that write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fr, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fr, text_content, len);

	if (fr == -1 || n == -1)
		return (-1);

	close(fr);

	return (1);
}

