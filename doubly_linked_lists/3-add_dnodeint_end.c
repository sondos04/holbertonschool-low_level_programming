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
dlistint_t *newnode;
dlistint_t *tail;


if (head == NULL)
return (NULL);

tail = *head;

newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
while (tail->next != NULL)
tail = tail->next;
tail->next = newnode;
newnode->prev = tail;

return (newnode);
}
