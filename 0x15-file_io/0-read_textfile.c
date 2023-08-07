#include <stdio.h>
#include "main.h"
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t count = 0;
	FILE *fh;

	if (filename == NULL)
	return (0);

	fh = fopen(filename, O_RDONLY);
	if (fh == NULL)
	return (0);

	while ((c = fgetc(fh)) != EOF && count < letters)
	{
		_putchar(c);
		count++;
	}

	fclose(fh);

	return (count);
}
