#include "main.h"
#include <stdio.h>

/**
  *times_table - function that prints the 9 times table
  *starting with 0
  *Return: Void
  */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (product < 10)
			{
				if (j > 1)
				{
					_putchar (32);
				}
				_putchar (product + '0');
			}
			else
			{
				_putchar ((product / 10) + '0');
				_putchar ((product % 10) + '0');
			}
			if (j < 9)
			{
				_putchar (44);
			}
			_putchar (9);
		}
		_putchar (10);
	}
}
