#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
  *main - copies the content of a file to another file.
  *@argc: argument count,number of argument passed on
  *@argv: a pointer to array of argument
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from;
	int fd_to;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(file_from, O_RDONLY);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | 0644);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(99);
		}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
	}
	if (close(fd_from) == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't close fd %d\n",
			fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't close fd %d\n",
	fd_to);
		 exit(100);
	}
	return (0);
}
