#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strcmp - compares two strings
  *@s1: first string to be compared
  *@s2: second string to be compared
  *Return: integer
  */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
