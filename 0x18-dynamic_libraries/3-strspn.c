#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strspn - gets the length of a prefix substring.
  *@s: string to be scanned.
  *@accept: string containing the list of characters to match
  *Return: number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);

	return (n);
}
