#include "main.h"

/**
  *_memcpy - copies memory area.
  *@dest: Pointer to the destination array
  *@src: Pointer to the source array.
  *@n: number of bytes to be copied from source to destination
  *Return: a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
