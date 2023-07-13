#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: pointer to the memory previously allocated with a call to malloc
  *@old_size: size, in bytes, of the allocated space for ptr
  *@new_size: new size, in bytes of the new memory block
  *
  *Return: pointer to the newly allocated memory, or NULL if the request fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;

	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	return (NULL);
	for (n = 0; n < old_size && n < new_size; n++)
	{
		nptr[n] = ((char *) ptr)[n];
	}
	free(ptr);
	return (nptr);
}
