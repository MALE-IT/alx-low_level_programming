0x13. C - More singly linked lists

C
Algorithm
Data structure
		mandatory tasks:
0. Print list

> Write a function that prints all the elements of a listint-t list.

	*Prototype: size_t print_listint(const listint_t *h);

1.  List length
> Write a function that returns the number of elements in a linked listint-t list
	*Prototype: size_t listint_len(const listint_t *h);

2. Add node
> Write a function that adds a new node at the beginning of a listint-t list.
	*Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3. Add node at the end
> Write a function that adds a new node at the end of a listint t list.
	Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

4. Free list
> Write a function that frees a listint t list.
	Prototype: void free_listint(listint_t *head);

5. Free
> Write a function that frees a listint t list.

	Prototype: void free_listint2(listint_t **head);
		The function sets the head to NULL

6. Pop
> Write a function that deletes the head node of a listint t linked list, and returns the head node’s data (n)
	*Prototype: int pop_listint(listint_t **head);

7. Get node at index
> Write a function that returns the nth node of a listint t linked list.
	*Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

8. Sum list
> Write a function that returns the sum of all the data (n) of a listint t linked list.
	*Prototype: int sum_listint(listint_t *head);

9. Insert
> Write a function that inserts a new node at a given position.

	*Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

10. Delete at index
> Write a function that deletes the node at index index of a listint t linked list
	*Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);


