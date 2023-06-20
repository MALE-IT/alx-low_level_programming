#include "main.h"
#include <ctype.h>
/**
*_isalpha - function that checks for alphabetic character.
*@c: character from ASCII table
*Return:1 lowercase.0 otherwise.
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
