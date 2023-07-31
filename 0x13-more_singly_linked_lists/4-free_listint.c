#include "lists.h"

/**
  *free_listint - frees a listint_t list.
  *@head: listint_t list to be freed
  *
  *Return: Void
  */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
