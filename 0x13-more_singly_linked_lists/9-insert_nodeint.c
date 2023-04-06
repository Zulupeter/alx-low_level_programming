#include "lists.h"
#include <stdlib.h>

/*
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node in the linkedilist.
 * @idx: Position of the new node to be inserted in.
 * @n: Value to be stored in the new node.
 * Return: Pointer to thnewly inserted node or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tp;
	unsigned int j;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
			return (NULL);
			new_node->n = n;

			if (idx == 0)
			{

			new_node->next = *head;
			*head = new_node;
			return (new_node);
			}

			tp = *head;
			for (j = 0; j < idx - 1 && tp != NULL; j++)
				tp = tp->next;
			if (tp == NULL)
			{
			free(new_node);
			return (NULL);
			}

			new_node->next = tp->next;
			tp->next = new_node;

			return (new_node);
}
