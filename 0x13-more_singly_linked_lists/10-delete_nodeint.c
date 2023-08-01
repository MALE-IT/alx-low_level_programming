#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node at index index of a listint_t.
  *@index: is the index of the node that should be deleted. Index starts at 0
  *@head: pointer to the first element in the list
  *
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *current = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (i < index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL || i < index - 1)
		return (-1);
	current = temp->next;
	temp->next = current->next;
	return (1);
}
