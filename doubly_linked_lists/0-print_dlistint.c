/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * This function iterates through a doubly linked list
 * and prints each integer element in a new line.
 *
 * Return: number of nodes printed
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
