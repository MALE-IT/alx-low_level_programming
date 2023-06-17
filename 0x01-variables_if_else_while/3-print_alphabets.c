#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a = a + 1;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar (10);

	return (0);
}
