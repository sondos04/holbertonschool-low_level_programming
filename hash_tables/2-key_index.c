#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *key_index - create an index for a table by djb2
 *@key: integer of the key in the table
 *@size: integer of the size of the array
 *Return: index of table for success, NULL for failure
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
if (size == 0)
return (0);
if (key == 0)
return (0);
index = hash_djb2(key) % size; 
return (index);
}
