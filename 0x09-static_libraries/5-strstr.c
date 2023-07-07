#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strstr - locates a substring
  *@haystack: This is the main C string to be scanned
  *@needle: the small string to be searched within haystack string.
  *Return: pointer to the beginning of the located substring
  *NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	char *occurence;

	occurence = strstr(haystack, needle);

	if (occurence != NULL)
	{
		return (occurence);
	}
	else
	{
		return (NULL);
	}
}
