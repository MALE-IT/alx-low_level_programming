#include "main.h"

/**
  *print_triangle - prints a triangle, followed by a new line
  *@size: is the size of the triangle
  *If size is 0 or less, the function should print only a new line
  *character # to print the triangle
  *Return: Void
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar (10);
	}
	else
	{
		int n;

	for (n = 0; n <= size; n++)
	{
		int m;

		for (m = n; m <= size; m++)
		{
			_putchar (' ');
		}
		for (m = 1; m <= n; m++)
		{
			_putchar(35);
		}
		_putchar (10);
	}
	}
}
