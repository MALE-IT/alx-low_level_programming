#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *print_list - prints all the elements of a list_t list
  *@h: pointer to the list_t list to print
  *
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int num = 0;
	const list_t *p = h;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (p != NULL)
	{
	printf("\n[");
	printf("%i", h->len);
	printf("] ");

	printf("%s", h->str);

	num++;

	p = p->next;

	}
	printf("\n");
	return (num);
}
