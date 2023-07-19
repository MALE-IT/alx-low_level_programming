#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - executes a function given as a parameter
  *on each element of an array
  *@array: array of data
  *@size: is the size of the array
  *@action: is a pointer to the function you need to use
  *Return: Void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array != NULL && action != NULL && size > 0)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
