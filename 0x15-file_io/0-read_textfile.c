#include "main.h"

/**
  *read_textfile - reads text file and prints it to the POSIX standard output.
  *@filename: is the name of the file to be read.
  *@letters: the number of letters it should read and print.
  *Return: the actual number of letters it could read and print
  *	if the file can not be opened or read, return 0
  *	if filename is NULL return 0
  *	if write fails or does not write the expected amount of bytes, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t bytes_written;
	ssize_t bytes_read;
	char *buffer;

	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fh);
		return (0);
	}
	bytes_read = read(fh, buffer, letters);
	if (bytes_read == -1)
	{
		close(fh);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		close(fh);
		free(buffer);
		return (0);
	}

	close(fh);
	free(buffer);
	return (bytes_written);
}
