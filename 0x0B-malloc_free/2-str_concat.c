#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * str_concat -  concatenates two strings
  *@s1: A pointer to a string that will be modified
  *@s2: A pointer to a string that will be appended to the end of s1.
  *Return: concatenated string (s1 + s2)
  */
char *str_concat(char *s1, char *s2)
{
	int i;

	int s1_length = strlen(s1);

	int s2_length = strlen(s2);

	int size = s1_length + s2_length + 1;

	char *s = malloc(size * sizeof(char));

	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
