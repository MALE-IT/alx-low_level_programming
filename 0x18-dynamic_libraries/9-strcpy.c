#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *_strcpy -  copies the string pointed to by src
  *including the terminating null byte (\0)
  *@dest: destination array
  *@src: source array
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
