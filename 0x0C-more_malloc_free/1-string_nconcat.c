#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - concatenates n bytes two strings.
  *@s1: string to append to
  *@s2: string to concatenate from
  *@n: number of bytes
  *The returned pointer shall point to a newly allocated space in memory,
  *which contains s1, followed by the first n bytes of s2, and null terminated
  *If the function fails, it should return NULL
  *If n is greater or equal to the length of s2 then use the entire string s2
  *if NULL is passed, treat it as an empty string
  *Return:pointer to the resulting string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	char *s;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
	{
		s[i++] = s2[j++];
	}

	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
