#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers
  *@width: width input
  *@height: height input
  *Return: pointer integer or If width or height is 0 or negative, return NULL
  */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **arrary;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arrary = malloc(sizeof(int *) * height);

	if (arrary == NULL)
	{
		free(arrary);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arrary[i] = malloc(sizeof(int) * width);

		if (arrary[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arrary[j]);
			}
			free(arrary);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arrary[i][j] = 0;
	}
	return (arrary);
}
