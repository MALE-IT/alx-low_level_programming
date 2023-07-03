#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: C string to be scanned
  *@accept: C string containing the characters to match.
  *Return: pointer to the byte in s that matches one of the bytes in accept
  *or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	char *occurence;

	occurence = strpbrk(s, accept);

	if (occurence != NULL)
	{
		return (occurence);
	}
	else
	{
	return (NULL);
	}

}
