#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  *main - program that multiplies two numbers
  *@argc: the number of things on the command line
  *@argv: a pointer to an array of char pointers
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int result;

	result = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", result);
		return (0);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
}
