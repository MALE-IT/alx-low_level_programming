#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*rev_string - reverse string
*@s: string to be reversed
*
*Return: Void
*/
void rev_string(char *s)
{
	int length = 0;

	int middle = length / 2;

	char temp;

	int n;

	for (n = 0; n < middle; n--)
	{
		temp = s[n];
		s[n] = s[length - n - 1];
		s[length - n - 1] = temp;
		n++;
	}

}
