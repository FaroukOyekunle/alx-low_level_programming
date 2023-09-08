#include "hash_tables.h"

/**
 * key_index - Computes the index at which a key should be stored in a hash table
 * @key: The key string to be hashed
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    if (key == NULL || size == 0)
        return (0);

    hash_value = hash_djb2(key); /* Compute the hash value */

    return (hash_value % size); /* Return the index within the array size */
}
