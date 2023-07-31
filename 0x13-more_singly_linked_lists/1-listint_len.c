#include "lists.h"

/**
  *size_t listint_len - returns number of elements in a linked listint_t list.
  *@h: pointer to the listint_t to transverse
  *
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int num = 0;
	const listint_t *p = NULL;

	p = h;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		p = p->next;
		num++;
	}
	return (num);
}
