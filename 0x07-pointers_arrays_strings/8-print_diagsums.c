#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - sum of the two diagonals of a square matrix of integers
  *@a: input array
  *@size: input size
  *Return: Void
  */
void print_diagsums(int *a, int size)
{
	int i, j, off_diagonals, main_diagonals;

	off_diagonals = 0;

	main_diagonals = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (i == j)
			{
				main_diagonals = main_diagonals + (*(a + i * size + i));
			}
			if (j == (size - i - 1))
			{
				off_diagonals = off_diagonals + (*(a + i * size + j));
			}
		}
	}
	printf("%d, ", main_diagonals);
	printf("%d\n", off_diagonals);
}
