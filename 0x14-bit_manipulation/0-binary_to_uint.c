#include "main.h"
#include <math.h>
#include <stdio.h>

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

	length = strlen(b);

	for (p = length - 1; p >= 0; p--)
	{
		if (b[p] != '0' && b[p] != '1')
		{
			return (0);
		}
		result += (b[p] - '0') * pow(2, m);
		m++;
	}
	return (result);
}
