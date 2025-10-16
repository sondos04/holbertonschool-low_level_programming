#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at a given index in a DLL
 * @head: address of the pointer to the head node
 * @index: zero-based index of the node to delete
 *
 * Return: 1 on success, -1 on failure (invalid index or empty list)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node, *next_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
node = *head;
next_node = node->next;

if (next_node != NULL)
next_node->prev = NULL;

*head = next_node;
free(node);
return (1);
}

node = *head;
for (i = 0; node != NULL && i < index; i++)
node = node->next;

if (node == NULL) /* index out of range */
return (-1);

if (node->prev != NULL)
node->prev->next = node->next;

if (node->next != NULL)
node->next->prev = node->prev;
free(node);
return (1);
}
