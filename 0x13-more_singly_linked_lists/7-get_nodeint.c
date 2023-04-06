#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the node at the given index of a linked list.
 * @head: Pointer to the first node of the linked list.
 * @index: The index of the node to return.
 *
 * Return: If the node at the given index exists - a pointer to the node.
 *         otherwise - NULL.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

			while (count < index)
			{
				head = head->next;

				if (head == NULL)
					return (NULL);
				count++;
			}
	return (head);
}

