#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: pointer to apointer to the first node of the list.
 * @n: Integer to insert into the new node.
 *
 * Return: Address of the new node, or NULL if memory alloction fails
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_node, *tp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tp = *head;
	while (tp->next)
		tp = tp->next;
	tp->next = new_node;

	return (new_node);
}
