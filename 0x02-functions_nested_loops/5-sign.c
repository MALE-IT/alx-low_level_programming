#include "main.h"
#include <stdio.h>

/**
  *print_sign - prints the sign of a number
  *greater than zero, zero or less than zero
  *
  *@n: the number to be checked
  *Return: 1 greater than zero, 0 zero or -1 less than zero
  */
int print_sign(int n)

{

	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar (48);
	return (0);
	}
	else
	{
	_putchar (45);
	return (-1);
	}
	_putchar (10);
}
