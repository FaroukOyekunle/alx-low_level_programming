#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current_node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
            return (current_node->value);
        current_node = current_node->next;
    }

    return (NULL); /* Key not found */
}
