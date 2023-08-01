#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list.
  *@index: is the index of the node, starting at 0
  *@head: first node in the linked list
  *
  *Return: the nth node of a listint_t linked list.
  *	if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
			current = current->next;
	}
	return (NULL);
}
