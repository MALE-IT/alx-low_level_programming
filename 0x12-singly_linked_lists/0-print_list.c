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
	const list_t *p = NULL;

	p = h;

	if (p == NULL)
		return (0);
	if (p->str == NULL)
		printf("%s\n", "[0] (nil)");

	while (p != NULL)
	{
		if (p->str != NULL)
		printf("[%u] %s\n", p->len, p->str);

		p = p->next;

		num++;

	}
	return (num);
}
