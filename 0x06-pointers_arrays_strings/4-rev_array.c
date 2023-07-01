#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m, temp;

	for (int m = 0; m < n / 2; m++)
	{
		temp = a[m];
		a[m] = a[n - m - 1];
		a[n - m - 1] = temp;
	}
}
