#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *puts2 -  prints every other character of a string
  *starting with the first character,
  *@str:  character of a string to be printed
  *Return: Void
  */
void puts2(char *str)
{
	int i;

	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar (str[i]);
	}
	_putchar (10);
}
