#include "main.h"
#include <stdio.h>

/*
 * get_endianness - checks the endianness
 * Little Endian - contains the least significant byte (1)
 * Big Endian - contaibs the most significant byte (0)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *byte = (char *)&n;


