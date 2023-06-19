#include <stdio.h>

/**
  *main - Entry point
  *print all possible combination of three digit
  *Return: Always 0 (Success)
  */
int main(void)

{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			for (o = 2; o <= 9; o++)
			{
				if (o > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(o + '0');
					if (n == 7 && m == 8 && o == 9)
					{
						break;
					}
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar (10);
	return (0);

}
