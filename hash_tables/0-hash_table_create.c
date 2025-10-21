#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create - creat a an emty table of size @size
 *@size: inteeger of the size of array
 *
 *Return: table for sucseess, NULL for failer
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

if (size == 0)
return (NULL);

table = calloc(1, sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->size = size;
table->array = calloc(size, sizeof(hash_node_t *));
if (table->array == NULL)
{
free(table);
return (NULL);
}
return (table);
}
