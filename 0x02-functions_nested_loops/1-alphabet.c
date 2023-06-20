#include "main.h"

/**
  *print_alphabet - prints the alphabet, in lowercase
  *
  *Return: Void.
  */
void print_alphabet(void)

{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar (10);
}
