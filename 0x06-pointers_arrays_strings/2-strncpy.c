#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strncpy - copies a string.
  *@dest: destination array where the content is to be copied.
  *@src: string to be copied.
  *@n: The number of characters to be copied from source.
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
