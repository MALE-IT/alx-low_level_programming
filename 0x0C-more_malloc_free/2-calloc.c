#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_calloc - allocates the requested memory and returns a pointer to it.
  *@nmemb: the number of elements to be allocated.
  *@size: the size of elements.
  *Return: a pointer to the allocated memory, or NULL if the request fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, n = 0;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
