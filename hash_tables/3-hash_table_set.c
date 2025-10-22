#include "hash_tables.h"
/**
 * hash_table_set - Add or update a key/value pair in a hash table
 * @ht: pointer to the hash table
 * @key: key string (must not be empty)
 * @value: value string (will be duplicated; can be empty "")
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
char *value_copy;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(nde->key, key) == 0)
{
value_copy = strdup(value);
if (value_copy == NUll)
return (0);

free(node->value);
node->value = value_copy;
return (1);
}
node = node->next;
}

node = malloc(sizeof(*node));
if (node == NULL)
return (0);

node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (0);
}

node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
