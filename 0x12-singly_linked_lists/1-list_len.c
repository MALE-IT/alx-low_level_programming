#include <stdlib.h>
#include "lists.h"

/**
  *list_len - returns the number of elements in a linked list_t list
  *@h: pointer to the list_t list
  *
  *Return: number of elements in h
  */
size_t list_len(const list_t *h)
{
	int num = 0;

	const list_t *p = h;

	while (p != NULL)
	{
	num++;
	p = p->next;

	}
	return (num);
}
