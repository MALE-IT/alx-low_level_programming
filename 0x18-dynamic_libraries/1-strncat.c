#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strncat - similar to the _strcat function, except that
  *it will use at most n bytes from src
  *src does not need to be null-terminated if it contains n
  *@src: source input integer
  *@dest: destionation input integer
  *@n: integer bytes
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
