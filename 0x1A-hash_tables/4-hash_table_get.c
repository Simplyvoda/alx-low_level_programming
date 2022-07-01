#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tempnode;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tempnode = ht->array[index];
	while (tempnode != NULL)
	{
		if (strcmp(tempnode->, key) == 0)
			return (tempnode->value);
		tempnode = tempnode->next;
	}
	return (NULL);
}
