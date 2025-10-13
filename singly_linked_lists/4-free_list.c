#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*free_list - free nodes of list_t list
*@head: pointer to pointer list
*
*
* Return: nothing
*/

void free_list(list_t *head)
{
list_t *node;

while (head != NULL)
{
node = head->next;
free(head->str);
free(head);
head = node;
}
}
