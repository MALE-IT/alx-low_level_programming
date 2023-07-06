#include "main.h"
#include <stdio.h>

int suppoting_is_prime(int n, int i);

/**
 * is_prime_number - check if a number is prime or not
 *@n: input number
 * Return: 1 input integer is a prime number
 *otherwise return 0
 *base case
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (suppoting_is_prime(n, n - 1));
}

/**
 * suppoting_is_prime - check if a number is prime or not
 *@n: input number
 *@i: iterator
 * Return: 1 input integer is a prime number
 *otherwise return 0
 *recursive case
 */
int suppoting_is_prime(int n, int i)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i <= n / 2)
	{
		return (1);
	}
	return (suppoting_is_prime(n, i - 1));
}
