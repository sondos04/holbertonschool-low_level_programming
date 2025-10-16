#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a given index in a DLL
 * @head: pointer to the head of the list
 * @index: zero-based position of the target node
 *
 * Return: pointer to the node at @index on success, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head == NULL)
return (NULL);
while (head != NULL)
{
if (count == index)
return (head);
head = head->next;
count++;
}
return (NULL);
}
