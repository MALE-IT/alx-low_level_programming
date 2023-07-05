#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: The base value whose power is to be calculated.
 *@y: The power value
 * Return: the power raised to the base value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
