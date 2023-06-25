#include "main.h"

/**
  *print_diagonal - draws a diagonal line on the terminal
  *@n: is the number of times the character \ should be printed
  *Return: Void
  */
void print_diagonal(int n)
{
	int i, j, r;

	r = n;

	if (r <= 0)
	{
		_putchar ('\n');
	}
		for (i = 1; i < r; i++)
		{
			for (j = 1; j < r; j++)
			{
				if (i == j)
				{
					_putchar (92);
				}
				else if (j < i)
				{
					_putchar (' ');
				}
			}
			_putchar (10);
		}
}
