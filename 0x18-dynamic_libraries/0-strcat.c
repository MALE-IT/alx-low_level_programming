#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strcat - concatenates two strings.
  *@src: source input value
  *@dest: destination input value
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
