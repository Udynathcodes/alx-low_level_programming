#include "main.h"

/**
 * print_error - Prints an error message.
 * @message: The error message format string.
 * @filename: The name of the file causing the error.
 * @exit_code: The exit code to use when exiting the program.
 */
void print_error(char *message, char *filename, int exit_code)
{
	dprintf(2, message, filename);
	dprintf(2, "\n");
	exit(exit_code);
}

/**
 * copy_content - Copies the content of one file to another.
 * @source_fd: The file descriptor of the source file.
 * @target_fd: The file descriptor of the target file.
 */
void copy_content(int source_fd, int target_fd)
{
	char buffer[MAX_BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, MAX_BUFFER_SIZE)) > 0)
	{
		bytes_written = write(target_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(source_fd);
			close(target_fd);
			print_error("Error: Can't write to file", "", 99);
		}
	}

	if (bytes_read == -1)
	{
		close(source_fd);
		close(target_fd);
		print_error("Error: Can't read from file", "", 98);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments provided.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or exit with a specific code on failure.
 */

int main(int argc, char *argv[])
{
	int source_fd, target_fd;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", "", 97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		print_error("Error: Can't read from file %s", argv[1], 98);
	}

	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (target_fd == -1)
	{
		close(source_fd);
		print_error("Error: Can't write to %s", argv[2], 99);
	}

	copy_content(source_fd, target_fd);

	if (close(source_fd) == -1 || close(target_fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor %d\n",
				(source_fd == -1) ? target_fd : source_fd);
		exit(100);
	}

	return (0);
}
