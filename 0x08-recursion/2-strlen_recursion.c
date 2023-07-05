#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 *@s: the string whose length is to be found.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (length);
}
