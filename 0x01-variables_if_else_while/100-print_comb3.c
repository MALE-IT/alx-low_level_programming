#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Alway 0 (Success)
  */
int main(void)

{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
	{
		if (n != m)
		{
			putchar(n + '0');
			putchar(m + '0');
		if (n == 9 && m == 8)
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
