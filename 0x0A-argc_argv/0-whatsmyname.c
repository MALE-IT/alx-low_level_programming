#include "main.h"
#include <stdio.h>

/**
  *main - program that prints its name
  *@argc: for argument count
  *@argv: for argument vector
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
