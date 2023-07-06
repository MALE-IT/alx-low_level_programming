#include "main.h"
#include <stdio.h>

int suppoting_sqrt_recursion(int n, int i);

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: input to be squared.
  *
  *Return: integer as a square root
  *base case
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (suppoting_sqrt_recursion(n, 0));
}

/**
  *suppoting_sqrt_recursion - returns the natural square root of a number.
  *@n: input to be squared.
  *@i: iterator
  *Return: integer as a square root
  *recursive case
  */
int suppoting_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (suppoting_sqrt_recursion(n, i + 1));
}
