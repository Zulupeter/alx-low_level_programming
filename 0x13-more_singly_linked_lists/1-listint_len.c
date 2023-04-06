#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 **/

size_t listint_len(const listint_t *h)

{
	const listint_t *tp;
	unsigned int count = 0;

	tp = h;
	while (tp)
	{
		count++;
		tp = tp->next;
	}

	return (count);
}
