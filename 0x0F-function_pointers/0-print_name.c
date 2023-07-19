#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name in a function pointer
 * @name: name to be printed
 *@f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
