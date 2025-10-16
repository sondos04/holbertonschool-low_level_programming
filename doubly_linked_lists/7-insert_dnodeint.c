#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a specific index
 * @h: address of the pointer to the head node
 * @idx: zero-based index where to insert
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed / index invalid
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode, *temp;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;
for (i = 0; temp != NULL && i < idx - 1; i++)
temp = temp->next;

if (temp == NULL)
return (NULL);

if (temp->next == NULL && i == idx - 1)
return (add_dnodeint_end(h, n));

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->prev = temp;
newnode->next = temp->next;

temp->next->prev = newnode;
temp->next = newnode;

return (newnode);
}
