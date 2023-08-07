#include "main.h"
#include <string.h>

/**
  *append_text_to_file - appends text at the end a file
  *@filename: is the name of the file
  *@text_content: is the NULL terminated string to add at the ens of the file
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fh = open(filename, O_WRONLY | O_APPEND);
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
	close(fh);
	return (1);
}
