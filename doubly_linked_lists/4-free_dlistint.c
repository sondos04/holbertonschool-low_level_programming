#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free all the list
 * @head: address of the pointer to the head node
 * 
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *node;

while (head != NULL)
{
node = head->next;
free(head);
head = node;
}
}
