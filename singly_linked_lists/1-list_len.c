#include <stdio.h>
#include "lists.h"

/**
 * list_len - count the length of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
