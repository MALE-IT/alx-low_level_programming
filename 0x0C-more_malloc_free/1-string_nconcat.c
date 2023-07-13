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
	unsigned int i, j;

	char *s;

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	unsigned int size = s1_len + s2_len + 1;

	s = malloc(sizeof(char) * (size + n));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	s[i] = s1[i];

	for (j = 0; j < s2_len && j < n; j++)
	s[s1_len + j] = s2[j];

	s[size - 1] = '\0';

	return (s);
}
