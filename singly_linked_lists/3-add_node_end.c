#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - add node to the end of list_t list
 *@head: pointer to pointer list
 *@str: pointer to the char
 *
 * Return: address of new nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *last;
char *element;
size_t count = 0;
if (head == NULL || str == NULL)
return (NULL);
node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}

element = strdup(str);
if (element == NULL)
{
free(node);
return (NULL);
}
while (element[count] != '\0')
{
count++;
}
node->str = element;
node->len = count;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}

last = *head;

while (last->next != NULL)
last = last->next;

last->next = node;
return (node);
}
