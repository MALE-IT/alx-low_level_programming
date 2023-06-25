#include "main.h"

/**
  *print_square - prints a square, followed by a new line
  *@size: is the size of the square
  *Return: Void
  */
void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar (35);
			}
			_putchar (10);
		}
	}
}
