#include "lists.h"

/**
* add_node_end - adds a new node at the end
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: pointer to the newly added node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = malloc(sizeof(list_t));
list_t *last = *head;
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
temp->len = strlen(str);
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
}
else
{
while (last->next != NULL)
{
last = last->next;
}
last->next = temp;
}
return (temp);
}
