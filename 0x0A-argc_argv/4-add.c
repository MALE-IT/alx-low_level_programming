#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
  *main -  a program that adds positive numbers.
  *@argc: argument count
  *@argv: argument vector
  *no number is passed to the program, print 0
  *one of the number contains symbols that are not digits, print Error
  * followed by a new line, and return 1
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		sum = atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
