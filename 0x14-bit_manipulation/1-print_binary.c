#include "main.h"

/**
  *print_binary -  prints the binary representation of a number.
  *@n: number to print in binary
  *
  *Return: Void
  */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 63; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
