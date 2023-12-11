#include "main.h"
#include <stdio.h>

/**
  *_puts - a function that prints a string, followed by a new line
  *@str: string to be printed
  *
  *Return: Void
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar (10);
}
