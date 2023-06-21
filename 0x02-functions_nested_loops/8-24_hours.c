#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Void.
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while ("true")

	{
		_putchar ((hour / 10) + '0');
		_putchar ((hour % 10) + '0');
		_putchar (58);
		_putchar ((minute / 10) + '0');
		_putchar ((minute % 10) + '0');
		_putchar (10);
		minute++;
		if (minute == 60)
		{
			hour += 1;
			minute = 0;
		}
		if (hour == 24)
		{
			hour = 0;
			minute = 0;
		}
		sleep(60);
	}
}
