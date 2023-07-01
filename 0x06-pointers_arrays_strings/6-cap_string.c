#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
  *cap_string - capitalizes all words of a string
  *Separators of words: space, tabulation, new line
  *@str: input string
  *Return: Always 0 (Success)
  */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))

			index++;

		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '\"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
				str[index] = str[index] - 32;
		index++;
	}

	return (str);
}
