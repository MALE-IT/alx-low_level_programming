#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Alway 0 (Success)
  */
int main(void)

{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = 1; m <= 9; m++)
	{
		if (m > n)
		{
			putchar(n + '0');
			putchar(m + '0');
		if (n == 8 && m == 9)
		{
			continue;

		}
		putchar(44);
		putchar(' ');
		}
	}
	}
	putchar (10);

	return (0);

}
