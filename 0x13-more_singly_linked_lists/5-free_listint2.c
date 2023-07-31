#include "lists.h"

/**
  *free_listint2 - frees a listint_t list,sets the head to NULL
  *@head: pointer to the listint_t list to be freed
  *
  *Return: Void.
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	if (current == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
