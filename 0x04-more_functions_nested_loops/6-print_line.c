#include "main.h"

/**
  *print_line - draws a straight line in the terminal.
  *@n: is the number of times the character _ should be printed
  *Return: Void
  */
void print_line(int n)
{
	int i, columns;

	columns = n;


	if (columns > 0)
	{
		for (i = 1; i <= columns; i++)
		{
			_putchar (95);
		}
		_putchar (10);
	}
	else
	{
		_putchar ('\n');
	}
}

