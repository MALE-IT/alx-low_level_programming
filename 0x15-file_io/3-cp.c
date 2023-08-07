#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - copies the content of a file to another file.
  *
  *return  Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	FILE *fptr1;
	char c;

	if (argc != 3)
	{
	fprintf(stderr,  "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fptr1 = fopen (file_from, O_RDONLY);
		if (fptr1 == NULL)
		{
			fprintf("Error: Can't read from file NAME_OF_THE_FILE");
			exit(98);
		}
	fptr2 = fopen("filename", "O_RDWR");
		if (fptr2 ==NULL)
		{
			dprintf("Error: Can't read from file NAME_OF_THE_FILE");
			fclose(fptr1);
			exit(99);
		}
	while ((c = fgetc(fptr1)) != EOF)
	{
		fputc(c, fptr2);
	}
	dprintf("succefully copied\n");

	fclose(fptr1);
	fclose(fptr2);

	return (0);
}
