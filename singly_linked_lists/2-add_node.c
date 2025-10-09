#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - add node to the list_t list
 *@head: pointer to pointer list 
 *@str: pointer to the char
 *
 * Return: address of new nodes
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node;
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
if (element != NULL)
count ++;
node->str = element;
node->len = count;
node->next = *head;
*head = node;
return (node);
}
