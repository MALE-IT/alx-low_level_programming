#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_handling - handles errors in the file
 * @file_from: file to copy from (file descriptor)
 * @file_to: the destination of the copied file (file descriptor)
 * @argv: command-line arguments
 * Return: void
 */
void error_handling(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0644);

	error_handling(fd_from, fd_to, argv);

	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_handling(-1, fd_to, argv);
		}
	}

	close(fd_from);
	close(fd_to);

	return (0);
}
