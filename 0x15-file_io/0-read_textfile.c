#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
  *read_textfile - reads a text file and prints it to the POSIX standard output
  *@letters: is the number of letters it should read and print
  *@filename: filename of letters to be read
  *
  *Return: actual number of letters it could read and print
  *	if the file can not be opened or read, return 0
  *	if filename is NULL return 0
  *	if write fails or does not write the expected amount of bytes, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w, t;
	int fh;

	if (filename == NULL)
	{
		return (0);
	}
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
	t = read(fh, buffer, letters);
	if (t == -1)
	{
		close(fh);
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1)
	{
		close(fh);
		free(buffer);
		return (0);
	}
	close(fh);
	free(buffer);
	return (w);
}
