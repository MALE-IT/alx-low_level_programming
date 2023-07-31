#include "lists.h"

/**
  *print_listint -  prints all the elements of a listint_t list.
  *@h: pointer to the listint_t to print
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int num = 0;
	const listint_t *p = NULL;

	p = h;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		num++;
	}
	return (num);
}
