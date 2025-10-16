#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: address of the pointer to the head node
 * @n: value to store in the new node
 *
 * Return: address of the new node on success, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newhead;
dlistint_t *tail;


if (head == NULL)
return (NULL);

tail = *head;

newhead = malloc(sizeof(dlistint_t));

if (newhead == NULL)
return (NULL);

newhead->n = n;
newhead->next = NULL;

if (*head == NULL)
{
newhead->prev = NULL;
*head = newhead;
return (newhead);
}
while (tail->next != NULL)
tail = tail->next;
tail->next = newhead;
newhead->prev = tail;

return (newhead);
}
