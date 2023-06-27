#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *print_array - prints n elements of an array of integers
  *@a: array of integers
  *@n: number of elements of the array to be printed
  *
  *Return: Void
  */
void print_array(int *a, int n)
{
	int i, length, *t;

	length = 0;

	for (t = a; *t != '\0'; t++)
	{
		length++;
	}
	if (n <= length)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
