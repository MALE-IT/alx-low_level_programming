#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *string_toupper - convert lowercase alphabet to uppercase
 *@str: pointer array
 * Return: nothing.
 */
char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
	}
	return (str);
}
