#include "main.h"
#include <ctype.h>
/**
*_islower - function that checks for lowercase character
*@c: character from ASCII table
*Return:1 lowercase.0 otherwise.
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
