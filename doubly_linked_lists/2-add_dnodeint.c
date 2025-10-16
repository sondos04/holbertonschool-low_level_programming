#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning
 * @h: pointer to pointer to the head of the list
 * @n: integer - value of lists
 *
 * Return: address of new node on success, or NULL on failure
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newhead;
if (head == NULL)
return (NULL);
newhead = malloc(sizeof(dlistint_t));
if (newhead == NULL)
return (NULL);
newhead->prev = NULL;
if (*head != NULL)
(*head)->prev = newhead;
newhead->next = *head;
*head = newhead;
newhead->n = n;
return (newhead);
}
