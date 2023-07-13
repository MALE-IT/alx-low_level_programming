#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *array_range - creates an array of integers
  *@min: minimum range of values
  *@max: maximum range of values
  *Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *ptr;

	int n = 0, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
