#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index -  searches for an integer
  *@array: array
  *@size: is the number of elements in the array array
  *@cmp: is a pointer to the function to be used to compare values
  *Return: the index of the first element
  *the cmp function does not return 0.
  *If no element matches, return -1
  *If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL && size <= 0 && cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}

