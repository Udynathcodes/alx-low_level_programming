#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int custom_file_descriptor, custom_total_bytes = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	custom_file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (custom_file_descriptor == -1)
		return (-1);

	while (text_content[custom_total_bytes] != '\0')
		custom_total_bytes++;

	if (write(custom_file_descriptor, text_content, custom_total_bytes) == -1)
	{
		close(custom_file_descriptor);
		return (-1);
	}

	close(custom_file_descriptor);
	return (1);
}
