#include <stdio.h>

void print_quote(void) __attribute__ ((constructor));

/**
  *print_quote - Function to print the quote
  *before the main function is executed
  *
  *Return: Void.
  */
void print_quote(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
