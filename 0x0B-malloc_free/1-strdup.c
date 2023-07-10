#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - duplicate a string
  *@str: the string to duplicate
  *returns a pointer to a newly allocated space in memory
  *which contains a copy of the string given as a parameter.
  *Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	char  *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = strdup(str);

		return (s);
	}
}
