#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - function that prints a string, in reverse, followed by a new line
*@s: string to print
*
*Return: Void
*/
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar (10);

}
