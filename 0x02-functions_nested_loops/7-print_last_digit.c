#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit -  prints the last digit of a number
 *@n: number as an interger
 * Return: last digit
 */
int print_last_digit(int n)
{
	int num;

	num = abs(n);

	if (num == 0)
	{
		num = 0;
	}
	else if (num < 10)
	{
		num = num;
	}
	else
	{
		num = num % 10;
	}
	_putchar (num + '0');

	return (num);
}

