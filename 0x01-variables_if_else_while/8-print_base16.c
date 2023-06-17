 #include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
		putchar(a);
		a = a + 1;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar (10);

	return (0);
}
