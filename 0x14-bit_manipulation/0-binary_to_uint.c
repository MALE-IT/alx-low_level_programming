#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *my_exponent - calculate the power of the base
  *@base: base number 2
  *@exponent: exponent m
  *
  *Return: calculated the power
  */
unsigned int my_exponent(int base, int exponent)
{
	unsigned int result = 1;

	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}
	return (result);
}

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: is pointing to a string of 0 and 1 chars
  *
  *Return: the converted number, or 0 if
  *	there is one or more chars in the string b that is not 0 or 1
  *	b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int length;
	unsigned int result = 0;
	int m = 0;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (p = length - 1; p >= 0; p--)
	{
		if (b[p] != '0' && b[p] != '1')
		{
			return (0);
		}
		result += (b[p] - '0') * my_exponent(2, m);
		m++;
	}
	return (result);
}

