#include "main.h"

/**
  *get_endianness - checks the endianness.
  *creates a 4-byte integer with the value 0x00000001,
  *checks the first byte (least significant byte) to determine the endianness
  *return: '1' If the system is little-endian, the first byte will be 0x01, 
  *	'0' if the system is big-endian, the first byte will be 0x00,
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
