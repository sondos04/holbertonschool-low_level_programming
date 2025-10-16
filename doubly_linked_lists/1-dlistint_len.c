#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - prints length  of a doubly linked list
 * @h: pointer to the head of the list
 *
 * This function iterates through a doubly linked list
 * and prints the length of the lists.
 *
 * Return: length of list
 */



size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return(count);
}
