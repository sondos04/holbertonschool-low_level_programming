#include "hash_tables.h"

/**
 * hash_table_set - add/update a key/value pair in a hash table
 * @ht: hash table
 * @key: key string (must not be empty)
 * @value: value string (duplicated; can be "")
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
char *value_copy;
unsigned long int index;

if (!ht || !key || !value || !*key)
return (0);

index = key_index((const unsigned char *)key, ht->size);
for (node = ht->array[index]; node; node = node->next)
if (strcmp(node->key, key) == 0)
{
value_copy = strdup(value);
if (!value_copy)
return (0);
free(node->value);
node->value = value_copy;
return (1);
}
node = malloc(sizeof(*node));
if (!node)
return (0);
node->key = strdup(key);
if (!node->key)
{
free(node);
return (0);
}
node->value = strdup(value);
if (!node->value)
{
free(node->key), free(node);
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
