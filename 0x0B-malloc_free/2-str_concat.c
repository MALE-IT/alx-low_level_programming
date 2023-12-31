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
	char *s3;

	int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
			if (s3 == NULL)
			return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}
