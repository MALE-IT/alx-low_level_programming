#include "main.h"

/**
  *print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
  *
  *Return: Void.
  */
void print_alphabet_x10(void)
{
	int n = 97;
	int m;

	for (m = 0; m < 10; m++)
	{
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		n = 97;
		_putchar (10);
	}
}
