#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - compute the sum of all node values in a DLL
 * @head: pointer to the head of the doubly linked list
 *
 * Return: total sum of all data (n), or 0 if the list is empty
 */


int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
