#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of s list.
 * @head: Adress pf the first node of a list.
 * @n: Integer to insert into the new node.
 *
 * Return: Adress of the new.
 **/

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
