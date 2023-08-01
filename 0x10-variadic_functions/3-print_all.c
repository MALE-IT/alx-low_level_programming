#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_char - Prints a character.
  *@list: A va_list with the character to print.
  *Return: Void
  */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
  *print_int - Prints an integer.
  *@list: A va_list with the integer to print.
  *
  *Return: Void
  */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  *print_float - Prints a floating-point number.
  *@list: A va_list with the float to print.
  *
  *Return: Void
  */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
  *print_string - Prints a string
  *@list: A va_list with the string to print.
  *
  *Return: Void
  */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}

/**
  *print_all - prints anything
  *@format: is a list of types of arguments passed to the function
  *     c: char
  *     i: integer
  *     f: float
  *     s: char * (if the string is NULL, print (nil)
  *Return: Void
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char sep[] = ", ";

	va_list list;

	va_start(list, format);

	if (format && *format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					print_char(list);
					break;
				case 'i':
					print_int(list);
					break;
				case 'f':
					print_float(list);
					break;
				case 's':
					print_string(list);
					break;
				default:
					i++;
					continue;
			}
			printf("%s", sep);
			i++;
		}

	}
	printf("\n");
	va_end(list);
}
