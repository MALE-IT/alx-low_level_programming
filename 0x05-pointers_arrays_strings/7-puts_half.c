#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *puts_half - prints half of a string, followed by a new line.
  *If the number of characters is odd,
  *print the last n characters of the string
  *@n = (length_of_the_string - 1) / 2
  *@str: string to be printed
  *Return: Void
  */
void puts_half(char *str)
{
	int n;

	int length = strlen(str);

	if (length % 2 == 0)
	{
	for (n = length / 2; n < length; n++)
	{
		_putchar (str[n]);
	}
	}
	else
	{
		for (n = (length + 1) / 2; n < length; n++)
		{
			_putchar (str[n]);
		}
	}
	_putchar (10);
}
