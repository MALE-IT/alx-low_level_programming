#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node - adds a new node at the beginning of a list_t list.
  *@head: double pointer to the list_t list
  *@str: new string to add in the node
  *
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[len])
	len++;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
