#include "main.h"
#include <string.h>

/**
  *create_file - creates a file.
  *@filename: is the name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *The created file must have those permissions:
  *rw-------. If the file already exists, do not change the permissions.
  *
  *Return: 1 on success, -1 on failure
  *	if filename is NULL return -1
  *	if text_content is NULL create an empty file
  */
int create_file(const char *filename, char *text_content)
{
	int fh;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fh == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fh, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fh);
			return (-1);
		}
	}
	if (close(fh) == -1)
	{
		return (-1);
	}
	return (1);
}
