#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a new node at a given position.
  *@idx: is the index of the list where the new node should be added.
  *	Index starts at 0.
  *@head: pointer to the first node in the list
  *@n: The value of the new node that needs to be inserted.
  *
  *Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	if (head == NULL)
		return NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
